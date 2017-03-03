#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FoxandWord {
  public:
    int howManyPairs(vector <string> words);
};


int FoxandWord::howManyPairs(vector <string> words)
{
  int interestingWords = 0;
  for (int i=0;i<words.size()-1;i++) {
    for (int j=i+1;j<words.size();j++) {
      for (int k=0;k<words[i].size() -1;k++){
        string a ,b;
        a = words[i].substr(0,k+1);
        b = words[i].substr(k+1);
        cout<<"A="<<a<<"B="<<b<<endl;
        if (words[j]==(b+a)) {
          interestingWords++;
          break ;
        }
      }
    }
  }
  return interestingWords;
}

main()
{
  FoxandWord test;
  cout<<test.howManyPairs({"tokyo","kyoto"})<<endl;
  cout<<test.howManyPairs({"ababab","bababa","aaabbb"})<<endl;
  cout<<test.howManyPairs({"eel","ele","lee"})<<endl;
}
