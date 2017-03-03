#include <iostream>
#include <string>

using namespace std;

class MagicalStringDiv2 {
  public:
    int minimalMoves(string S);
};

int MagicalStringDiv2::minimalMoves(string S)
{
  int l;
  int count = 0;
  l = S.size() / 2;
  for(int i = 0; i < l;i++)
    if (S[i] == '<') count++;
  for(int j = l; j < S.size(); j++)
    if (S[j] == '>') count++;
  return count;
}

int main(int argc, char **argv)
{
  MagicalStringDiv2 test;
  cout<<test.minimalMoves(">>>><<<<");
}
