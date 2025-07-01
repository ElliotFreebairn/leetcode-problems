#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
class Solution
{
public:
  string reverseVowels(string s) {
      int f = 0, l = s.length() - 1;
      unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

      while (f < l)
      {
          char c1 = tolower(s[f]);
          char c2 = tolower(s[l]);

          if(!vowels.count(c1)) {
              f++;
          } else if (!vowels.count(c2)) {
              l--;
          } else {
              swap(s[f], s[l]);
              f++;
              l--;
          }
      }
      return s;
  }

};

int main() 
{

}
