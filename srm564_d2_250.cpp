#include <iostream>
#include <string>

using namespace std;


class FauxPalindromes{
  public:
    string classifyIt(string word);
  private:
    bool isPalindrome(string word);
};

string FauxPalindromes::classifyIt(string word)
{
  if (isPalindrome(word)) return "PALINDROME";

  string newword;

  //convert the case
  for (int i=0;i<word.size();i++){
    if (word[i]>='A' && word[i]<='Z')  word[i] += 'a'-'A';
  }

  //deleting duplicate;
  for (int i =0;i<word.size()-1;i++){
    if (word[i] != word[i+1]) newword.push_back(word[i]);
  }
  newword.push_back(word[word.size()-1]);

  //cout<<"new word"<<newword<<endl;

  if (isPalindrome(newword)) return "FAUX";
  else return "NOT EVEN FAUX";
}


bool FauxPalindromes::isPalindrome(string word)
{
  for (int i=0;i<word.size()/2;i++){
    if(word[i] != word[word.size()-1-i]) return false;
  }
  return true;
}

main(int argc, char **argv)
{
  FauxPalindromes f;
  string test = argv[1];
  cout<<f.classifyIt(test);
}
