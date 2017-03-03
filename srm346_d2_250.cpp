#include <iostream>
#include <string>

using namespace std;

class DiamondHunt {
  public:
    int countDiamonds(string mine);
};

int DiamondHunt::countDiamonds(string mine)
{
  int o,r;
  o=r=0;
  for(int i = 0; i < mine.size(); i++) {
    if (mine[i] == '<' ) o++;
    else (o > 0 ) {
      o--;
      r++
    }
  }
  return r;
}

