#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class SwappingDigits {
  public:
    string minNumber(string num);
};

string SwappingDigits::minNumber(string num)
{
  string minstring = num;
  string numcopy = num;
  for (int i = 0; i < num.size()-1; i++) {
    for (int j = i + 1; j < num.size(); j++) {
      if ( i==0 && num[j] == '0' ) ; 
      else swap(num[i],num[j]);
      if ( num < minstring ) minstring = num;
      num = numcopy;
    }
  }
  return minstring;
}

main(int argc, char **argv)
{
  SwappingDigits t;
  cout<<t.minNumber(argv[1])<<endl;
}
