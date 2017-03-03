#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <map>
#include <set>

using namespace std;

class RouteIntersection {
  public:
    string isValid(int N, vector <int> coords, string moves);
    map <int, int> m;
    string print_point();
};

string RouteIntersection::print_point()
{
  ostringstream ss;
  map <int, int>::iterator mit;

  ss.clear();
  ss.str("");
  for(mit = m.begin(); mit != m.end(); mit++) {
    if (mit->second != 0) {
      ss << "[" << mit->first << "," << mit->second <<"]";
    }
  }
  return ss.str();
}

string RouteIntersection::isValid(int N, vector <int> coords, string moves)
{
  int i;
  set <string> points;
  string s;

  points.insert(print_point());
  for (i=0; i < coords.size(); i++) {
    if (moves[i] == '+')
      m[coords[i]] += 1;
    else
      m[coords[i]] -= 1;
    s = print_point();
    if (points.find(s) != points.end()) return "NOT VALID";
    points.insert(s);
  }
  return "VALID"
}
