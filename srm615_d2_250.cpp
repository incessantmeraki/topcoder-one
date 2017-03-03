#include <iostream>
#include <vector>

using namespace std;

class AmebaDiv2 {
  public:
    int simulate(vector <int> X, int A);
};

int AmebaDiv2::simulate(vector <int> X, int A)
{
  int i;
  for (i = 0; i < X.size(); i++) 
    if (X[i] == A) A *= 2;
  return A;
}

main()
{
  vector <int> X = {1,2,4,8,16,32,64,128,256,1024,2048};
  AmebaDiv2 test;
  int A = 1;
  cout << "Result = "<<test.simulate(X,A)<<endl;
}
