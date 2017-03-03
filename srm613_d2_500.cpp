#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class TaroFriends {
  public:
    int getNumbers(vector <int> coordinates, int X);
    void print_vector(vector <int> vec){
      for( int x : vec)  cout <<x<<" ";
      cout<<endl; 
    }
};

int TaroFriends::getNumbers(vector <int> coordinates, int X)
{
  int i,j;
  int min;
  vector<int> temp;

  sort(coordinates.begin(), coordinates.end());

  for (i = 0; i <= coordinates.size(); i++) {
    temp = coordinates;
    for ( j = 0; j < coordinates.size(); j++) {
      if (j >= i) 
        temp[j] -= X;
      else
        temp[j] += X;
    }
    print_vector(temp);
    sort(temp.begin(), temp.end());
    if (i==0)  min = temp[temp.size()-1] - temp[0];
    else if (temp[temp.size()-1] - temp[0] < min)  min = temp[temp.size()-1] - temp[0];
    cout <<"i = "<<i<<" min = "<<min<<endl;
  }

  return min;
}

int main() 
{
  TaroFriends test;
  vector <int> coords = {-3,0,1};
  int X = 3;
  cout<<"Result = "<<test.getNumbers(coords,X);
}

