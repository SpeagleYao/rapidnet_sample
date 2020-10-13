
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import pygraphviz as pgv
import queue


G=pgv.AGraph(strict=True, directed=True)



VID_dir = {}
RID_dir = {}



def load (prov_file, ruleExec_file):
    prov = pd.read_csv (prov_file)
    ruleExec = pd.read_csv (ruleExec_file)
    return prov, ruleExec






def draw_tuple (prov, i):
    data = prov.loc[i]
    VID = data["VID"]
    VID_score = str(float((data["Score"])))
    if len(VID_score)>8:
        VID_score = VID_score[:8]
    VID_name = [data["Loc"],'\n',20*'-' ,'\n' 
    , VID , ':', VID_score ]
    VID_name = ' '.join(VID_name)
    VID_dir[VID] = VID_name
    if G.has_node (VID_name)==False:
        G.add_node (VID_name)
        n = G.get_node(VID_name)
        n.attr['shape'] = 'box'
        n.attr['color'] = 'blue'

def draw_rule (ruleExec, i):
    data = ruleExec.loc[i]
    RID = data["RID"]
    r = str(data["R"])
    rloc = str(data["Rloc"])
    RID_name = [r , '@' , rloc , '\n'
    , (len(r)+60)*'-' ,'\n' 
    , RID , '= SHA1(' , r ,"+", rloc]
    VIDList = data["VIDList"]
    VIDList = VIDList[1:-1].split("/")
    for i in range(len(VIDList)):
        RID_name.append ("+")
        RID_name.append (VIDList[i])
    RID_name.append (")")
    RID_name = ' '.join(RID_name)
    RID_dir[RID] = RID_name
    if G.has_node (RID_name) == False:
        G.add_node (RID_name)
        n = G.get_node(RID_name)
        n.attr['shape'] = 'oval'
        n.attr['color'] = 'red'
    for i in VIDList:
        G.add_edge (VID_dir[i], RID_dir[RID])
    
def draw_link(prov, i):
    data = prov.loc[i]
    VID = data["VID"]
    RID = data["RID"]
    if RID!="Null":
        G.add_edge (RID_dir[RID], VID_dir[VID])


def draw (prov, ruleExec):
    while (VID_Queue.empty()!=True):
        VID_Curr = VID_Queue.get()
        VID_data = prov[prov["VID"]==VID_Curr]
        RID_List = []
        for i in VID_data.index:
            
            RID = VID_data.loc[i]["RID"]
            if RID!="Null":
                RID_List.append(VID_data.loc[i]["RID"])
        for RID in RID_List:
            
            
            RID_data = ruleExec[ruleExec["RID"]==RID]
            RID_index = RID_data.index[0]
            RID_data = ruleExec.loc[RID_index]
            VIDList = RID_data["VIDList"]
            VIDList = VIDList[1:-1].split("/")
            for VID in VIDList:
                draw_tuple(prov, prov[prov["VID"]==VID].index[0])
                VID_Queue.put(VID)
            draw_rule(ruleExec, RID_index)
        for i in VID_data.index:
            draw_link(prov, i)
        
            
prov, ruleExec = load("prov2.csv","ruleExec2.csv")
query = "VID16"
data = prov[prov["VID"]==query]

draw_tuple (prov, data.index[0])
VID_Queue = queue.Queue()
VID_Queue.put(query)

draw(prov, ruleExec)
    
G.layout(prog="dot")
G.draw('mess-q.pdf')
