#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class CandyShop {
  public:
  int countProbablePlaces(vector <int> X, vector <int> Y, vector <int> R);
};

int CandyShop::countProbablePlaces(vector <int> X, vector <int> Y, vector <int> R) 
{
  vector < vector <int> > coords(401, vector<int>(401)) ;
  int i, j, k, count;
  count = 0;


  for( i = 0; i <= 400; i++) {
    for (j = 0; j <= 400; j++) {
      coords[i][j] = 0; 
    }
  }
  for (i = 0; i < X.size(); i++){
    X[i] += 200;
    Y[i] += 200;
  }

  for ( i = 0 ;i < X.size(); i++) {
    int l , h;
    l = X[i] - R[i]; 
    h = X[i] + R[i];
    for (j = l; j <= h; j++) {
      int l1 = Y[i] - R[i];
      int h1 = Y[i] + R[i];
      for ( k = l1; k <= h1; k++) {
        if (abs(j-X[i]) + abs(k-Y[i]) <=R[i]) 
          coords[j][k] +=1;
      }
    }
  }

  for( i = 0; i <= 400; i++) {
    for (j = 0; j <= 400; j++) {
      //cout<< coords [i][j]<<" ";
      if (coords[i][j] == X.size())
        count++;
    }
    //cout<<endl;
  }

  return count;
}
  
main()
{
  CandyShop test;
  vector<int> X,Y,R;
  X = {-3,3,5,5};
  Y = {4,5,-2,0};
  R = {10,11,8,6};
  cout<<"Result = "<<test.countProbablePlaces(X, Y, R)<<endl;
}

