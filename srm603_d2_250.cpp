/* Commentary

Elegant solution: use while(s.size) and i = s.size() and j = i/2. if i is even and position j is greater than j-1 then do j--. Outcome == only one substr statement instead of three
Efficient Solution: takes likes linear time. Above one takes quadratic time ! this solution works with even and plays with i and j by incrementing i and decrementing j until j == -1
*/

#include <iostream>
#include <string>

using namespace std;

class MiddleCode{
  public:
    string encode(string s);
};

string MiddleCode::encode(string s)
{
  string t;
  int ssize = s.size();
  for (int i=0;i<ssize;i++){
    if(s.size() % 2 == 1){
      t.push_back(s[s.size()/2]);
      s = s.substr(0,s.size()/2)+s.substr(s.size()/2 + 1);
    }
    else{
      if (s[s.size()/2] < s[s.size()/2 - 1]){
        t.push_back(s[s.size()/2]);
        s=s.substr(0,s.size()/2)+s.substr(s.size()/2 +1);
      }
      else{
        t.push_back(s[s.size()/2 -1 ]);
        s = s.substr(0,s.size()/2 -1)+s.substr(s.size()/2);
      }
    }
    cout<<"s now becomes"<<s<<endl;
  }
  return t;
}

main(int argc, char **argv)
{
  MiddleCode test;
  string s = argv[1];
  cout<<test.encode(s)<<endl;
}
