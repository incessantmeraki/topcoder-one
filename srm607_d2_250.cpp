#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class BoundingBox {
  public:
    int smallestArea(vector <int> X, vector <int> Y);
}

int BoundingBox::smallestArea(vector <int> X, vector <int> Y)
{
  sort(X.begin(), X.end());
  sort(Y.begin(), Y.end());
  return (X[X.size()-1] - X[0]) * (Y[Y.size()-1] - Y[0]);
}
  
