#ifndef _MLN_H
#define _MLN_H

#include <iostream>
#include <string>
#include <map>
#include <assert.h>
#include "Clique.h"
using namespace std;


class MLN {
public:
  MLN();
  MLN(string prov, map<string, double> prob);

  void removeRedundant(string& prov);
  void build(string prov);

  int numberCliques(string literal);
  set<string> getObsLiterals();
  set<string> getQueryLiterals();

  ~MLN();
  
private:
  string prov;
  vector<Clique> cliques;
  set<string> obs;
  set<string> queries;
  map<string, double> prob;
  map<string, vector<int>> c_map;
};


#endif