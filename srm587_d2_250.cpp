#include <iostream>
#include <string>

using namespace std;

class InsertZ{
  public:
    string canTransform(string init, string goal);
};

string InsertZ::canTransform(string init, string goal)
{
  string stripped;
  for (int i = 0; i < goal.size(); i++){
    if (goal[i] != 'z') stripped.push_back(goal[i]);
  }
  if (stripped == init) return "Yes";
  else return "No";
}

