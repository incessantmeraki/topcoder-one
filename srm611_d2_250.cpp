#include <iostream>
#include <string>

using namespace std;

class InterestingNumber {
  public:
    string isInteresting(string x);
};

string InterestingNumber::isInteresting(string x) 
{
  int count;
  int i,j;

  for (char c = '0'; c <= '9'; c++) {
    count = 0;
    i = x.find(c);
    if (i != string::npos) {
      if (i == x.size() - 1) return "Not interesting";
      j = x.find(c,i+1);
      if (j == string::npos) return "Not interesting";
      if(j-i-1 != c-'0') return "Not interesting"; 
      if (j != x.size() -1 ){
        if (x.find(c,j+1) != string::npos) return "Not interesting";
      }
    }
  }
  return "Interesting";
}

main(int argc, char **argv)
{
  InterestingNumber test;
  cout<<test.isInteresting(argv[1])<<endl;
}
