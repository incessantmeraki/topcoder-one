#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class PackingParts {
  public:
    int pack(vector <int> partSizes, vector <int> boxSizes);
};

int PackingParts::pack(vector <int> partSizes, vector <int> boxSizes)
{
  int i , j;
  i = j = 0;
  for (j; i < partSizes.size() && j < boxSizes.size(); j++){
    if (partSizes[i] <= boxSizes[j]) i++;
  }
  return i;
}
