import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import pygraphviz as pgv


G=pgv.AGraph(strict=True, directed=True)
G.graph_attr['rankdir']='BT'
G.graph_attr['margin']=0.1
G.graph_attr['mclimit']=0.1
G.graph_attr['nodesep']=0.1





VID_dir = {}
RID_dir = {}



def load (prov_file, ruleExec_file):
    
    ruleExec = pd.read_csv (ruleExec_file)
    prov = pd.read_csv (prov_file)
    return prov, ruleExec


def draw_tuple (prov, i):
    data = prov.loc[i]
    VID = data["VID"]
    VID_score = str(data["Score"])
    #VID_detail = str(data["Detail"])
    if VID == "VID18":
        VID_score = "0.986112"
    if VID == "VID16":
        VID_score = "1.152"
    '''if VID == "VID3":
        VID_detail = "word(D1, ['release','phone', …], [0.8, 0.7,...])"
    if VID == "VID4":
        VID_detail = "f_SVM(['release', 'phone', …], [0.8, 0.7,...])"
    if VID == "VID5":
        VID_detail = "theme(D1, [echonology, business, ...])"
    if VID == "VID8":
        VID_detail = "word(D2, ['phone','apple', …], [0.7, 0.6,...])"
    if VID == "VID9":
        VID_detail = "f_SVM(['phone','apple', …], [0.7, 0.6,...])"
    if VID == "VID10":
        VID_detail = "theme(D2, [echonology, food, ...])"
    #if len(VID_score)>8:
        #VID_score = VID_score[:8]
    if VID == "VID16":
        VID_score = "1.152"
    if VID == "VID2002" or VID == "VID4007":
        VID_score = "..."
    if VID == "VID5" or VID == "VID10":
        VID_name = [VID,':',VID_detail, '\n' ,20*'-' ,'\n'
    ,  VID_score ]
    else:'''
    VID_name = [VID,':',VID_score]
    VID_name = ' '.join(VID_name)
    VID_dir[VID] = VID_name
    if G.has_node (VID_name)==False:
        G.add_node (VID_name)
        n = G.get_node(VID_name)
        n.attr['shape'] = 'box'
        n.attr['fontsize'] = 20
        n.attr['fontname'] = 'sans-serif'
        n.attr['height'] = 0.5
        n.attr['width'] = 0.9
        n.attr['color'] = 'blue'
        


def draw_rule (ruleExec, i):
    data = ruleExec.loc[i]
    RID = data["RID"]
    r = str(data["R"])
    rloc = str(data["Rloc"])
    Score = str(data["Score"])
    if RID == "RID2000" or RID == "RID4002":
        Score = "..."
    RID_name = [RID ,":", r,",","w=",Score] #, '= SHA1(' , r ,"+", rloc]
    VIDList = data["VIDList"]
    VIDList = VIDList[1:-1].split("/")
    '''for i in range(len(VIDList)):
        RID_name.append ("+")
        RID_name.append (VIDList[i])
    RID_name.append (")")'''
    RID_name = ' '.join(RID_name)
    RID_dir[RID] = RID_name
    if G.has_node (RID_name) == False:
        G.add_node (RID_name)
        n = G.get_node(RID_name)
        n.attr['shape'] = 'oval'
        n.attr['color'] = 'red'
        n.attr['fontsize'] = 20
        n.attr['fontname'] = 'sans-serif'
        n.attr['margin'] = 0.1
    for i in VIDList:
        G.add_edge (VID_dir[i], RID_dir[RID])


#def draw_link ():

def draw_link(prov, i):
    data = prov.loc[i]
    VID = data["VID"]
    RID = data["RID"]
    if RID!="Null":
        G.add_edge (RID_dir[RID], VID_dir[VID])
    



prov, ruleExec = load("prov2.csv","ruleExec2.csv")
for i in (prov.index):
    draw_tuple (prov, i)
for i in (ruleExec.index):
    draw_rule (ruleExec, i)
for i in (prov.index):
    draw_link (prov, i)
G.layout(prog="dot")
G.draw('msgtree.pdf')
