#include <iostream>
#include <map>
#include <vector>

using namespace std;

class ColorfulRabbits {
  public:
    int getMinimum(vector <int> replies);
};

int ColorfulRabbits::getMinimum(vector <int> replies)
{
  int i, j, x, y, total;
  map <int, int> m;
  map <int, int>::iterator mit;

  total = 0;

  for (i = 0; i < replies.size(); i++) 
    m[replies[i] +1] += 1;

  for (mit = m.begin(); mit != m.end(); mit++) {
    x = mit -> first;
    y = mit -> second;
    if (y % x == 0)
      total += x * (y/x);
    else
      total += x * (y/x + 1);
  }
  return total;
}
  
   
    
