#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class DivideByZero {
  public:
    int CountNumbers(vector <int> numbers);
};

int DivideByZero::CountNumbers(vector <int> numbers)
{
  vector<int> T,N,P;
  int i,j;
  T.resize(101,0);
  for (int num : numbers) T[num] = 1;
  N = numbers;

  for (i = 0 ; i < N.size(); i++) {
    for (j = 0; j < P.size(); j++) {
      int a = max (N[i], P[j]);
      int b = min (N[i], P[j]);
      int k = a/b;
      if (!T[k]) {
        T[k] = 1;
        N.push_back(k);
      }
    }
    P.push_back(N[i]);
  }

  return P.size();
}

main()
{
  DivideByZero test;
  vector<int> numbers;
  int i;

  while (cin>>i) {
    numbers.push_back(i);
  }

  cout<<"result "<<test.CountNumbers(numbers)<<endl;
}


