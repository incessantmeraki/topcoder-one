#include <iostream>
#include <string>

using namespace std;

class DistanceBetweenStrings {
  public:
    int getDistance(string a, string b, string letterSet);
  private:
    void toLowerCase(string &word);
};

void DistanceBetweenStrings::toLowerCase(string &word)
{
  for (int i=0;i<word.size();i++){
    if (word[i]>='A' && word[i]<='Z') {
      word[i] += 'a'-'A';
    }
  }
}

int DistanceBetweenStrings::getDistance(string a, string b, string letterSet)
{
  int distance = 0;
  int counta, countb;
  toLowerCase(a);
  toLowerCase(b);
  toLowerCase(letterSet);

  for(int i=0;i<letterSet.size();i++){
    counta=countb=0;
    for(int j=0;j<a.size();j++){
      if(letterSet[i]==a[j]) counta++;
    }
    for(int k=0;k<b.size();k++){
      if(letterSet[i]==b[k]) countb++;
    }
    distance += (counta-countb)*(counta-countb);
  }
  return distance;
}


main(int argc, char **argv)
{
  DistanceBetweenStrings test;
  string a,b,letterSet;
  a=argv[1];
  b=argv[2];
  letterSet=argv[3];
  cout<<"Result = "<<test.getDistance(a,b,letterSet);
}
