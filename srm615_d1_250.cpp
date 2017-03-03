#include <iostream>
#include <set>
#include <vector>

using namespace std;

class AmebaDiv1 {
  public:
    int count (vector <int> X);
};

int AmebaDiv1::count(vector <int> X) {
  set<int> initial, fnal;
  int i, t, count;
  set <int>::iterator sit;

  for (i = 0; i < X.size(); i++)  initial.insert(X[i]);

  for (sit = initial.begin(); sit != initial.end(); sit++) {
    t= *sit;
    for (i = 0; i < X.size(); i++)
      if (t == X[i]) t*=2;
    fnal.insert(t);
  }

  for(sit = initial.begin(); sit != initial.end(); sit++) 
    if (fnal.find(*sit) == fnal.end()) count++;

  return count;
}

main()
{
  AmebaDiv1 test;
  vector <int> X = { 1,2,4,8,16,32,64,128,256,1024,2048};

  cout<<"result ="<<test.count(X)<<endl;
}
  
  

