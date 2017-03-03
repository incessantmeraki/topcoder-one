#include <vector>

using namespace std;

class Cryptography {
  public:
    long long encrypt(vector <int> numbers);
};

long long encrypt(vector <int> numbers) 
{
  int min, pos;
  long long prod; 

  min = numbers[1];
  pos = 0;
  prod = 1;

  for (int i = 1; i < numbers.size(); i++) {
    if (numbers[i] < min) {
      min = numbers[i];
      pos = i;
    }
  }

  numbers[pos]++;

  for(int j = 0; j < numbers.size(); j++) {
    prod = prod * numbers[j];
  }

  return prod;

}

  
