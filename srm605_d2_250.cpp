#include <iostream>
#include <string>

using namespace std;

class AlienAndPassword{
  public:
    int getNumber(string S);
};

int AlienAndPassword::getNumber(string S)
{
  string T;
  for (int i = 0; i<S.size()-1; i++){
      if (S[i] != S[i+1]) T.push_back(S[i]);
  }
  T.push_back(S[S.size()-1]);
  cout<<"string is "<<T<<endl;
  return T.size();
}


main(int argc, char **argv)
{
  AlienAndPassword test;
  cout<<test.getNumber(argv[1]);
}
