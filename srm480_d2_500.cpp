#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <string>

using namespace std;

class InternetSecurity {
  public:
    vector <string> determineWebsite(vector <string> address, vector <string> keyword, vector <string> dangerous, int threshold);
};

vector <string> InternetSecurity::determineWebsite(vector <string> address, vector <string> keyword, vector <string> dangerous, int threshold)
{
  set <string> danger;
  set<int> output;
  set<int>::iterator sit;
  vector <string> result;
  vector <vector <string>> KV;
  int i, j, k, count;
  string s;
  istringstream ss;

  for (i = 0; i < dangerous.size(); i++)  danger.insert(dangerous[i]);

  KV.resize(keyword.size());

  for (i = 0; i < keyword.size(); i++) {
    count = 0;
    ss.clear();
    ss.str(keyword[i]);
    while(ss >> s)  KV[i].push_back(s);

    for (j=0; j < KV[i].size(); j++) {
      if (danger.find(KV[i][j]) != danger.end()) count++;
    }

    if (count >= threshold) {
      output.insert(i);
      for (k=0; k < KV[i].size(); k++) danger.insert(KV[i][k]);
    }
  }

  int psize = dangerous.size();	
  while(danger.size() > psize) {
    psize = danger.size();
    for(i = 0; i < KV.size(); i++) {
      count = 0;

      for (j=0; j < KV[i].size(); j++) {
        if (danger.find(KV[i][j]) != danger.end()) count++;
      }

      if (count >= threshold) {
        output.insert(i);
        for (k=0; k < KV[i].size(); k++) danger.insert(KV[i][k]);
      }
    }
  }

  for(sit=output.begin(); sit != output.end(); sit++) result.push_back(address[*sit]);

  return result;
}


     
  
     
