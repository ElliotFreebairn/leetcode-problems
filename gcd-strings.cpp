#include <iostream>
#include <vector>


class Solution
{
using namespace std;
public:
  string gcdOfStrings(string str1, string str2) {
      string largestWord = str1.length() >= str2.length() ? str1 : str2;
      string smallerWord = str1.length() >= str2.length() ? str2 : str1;

      string gcdStr = "";

      for (int i = 0; i < smallerWord.length(); i++)
      {
          string subStr = smallerWord.substr(0, i + 1);
          int subStrSize = subStr.length();
          string tempGcd = "";

          for (int j = 0; j < largestWord.length();)
          {
              string largestWordSubStr = largestWord.substr(j, i + 1);
              if (subStr != largestWordSubStr)
              {
                  tempGcd = "";
                  break;
              }

              tempGcd = subStr;
              j += subStrSize;
          }
          for (int k = 0; k < smallerWord.length(); k += subStrSize) {
              if (subStr != smallerWord.substr(k, subStrSize)) {
                  tempGcd = "";
                  break;
              }
          }
          if (tempGcd != "")
              gcdStr = tempGcd;
      }

      return gcdStr;
  }

};

int main() 
{

}
