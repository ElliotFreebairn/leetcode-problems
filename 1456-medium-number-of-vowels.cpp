#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
 int maxVowels(string s, int k) {
    int count = 0;
    int max = 0;
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) {
            count++;
            max = max > count ? max : count;
        }
    }

    for (int i = k; i < s.size(); i++) {
        bool prev = isVowel(s[i - k]); 

        if (prev) {
            count--;
        }
        
        if(isVowel(s[i])) {
            count++;
            max = max > count ? max : count;
        }
    }
    return max;
  }

  bool isVowel(char c) {
      return c == 'a' || c == 'e' ||
          c == 'i' || c == 'o' || c == 'u';
  }
};

int main() 
{

}
