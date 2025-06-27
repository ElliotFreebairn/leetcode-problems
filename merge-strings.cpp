#include <iostream>
#include <vector>

class Solution
{
public:
  static std::string mergeAlternately(std::string word1, std::string word2)
  {
    int word1Size = word1.length();
    int word2Size = word2.length();

    int bound = 0;

    std::string restOfWord ("");

    if (word2Size > word1Size)
    {
      bound = word1Size;
      restOfWord = word2.substr (word2Size - (word2Size - word1Size) ,word2Size);
    }
    else
    {
      bound = word2Size;
      restOfWord = word1.substr (word1Size - (word1Size - word2Size), word1Size);
    }

    std::string mergedWord;
    // if word 2 is larger
    for (int i = 0; i < bound; i++)
    {
      mergedWord = mergedWord + word1[i] + word2[i];
    }
    

    return mergedWord + restOfWord;
  }

};

int main() 
{
  std::string word1 ("ab");
  std::string word2 ("pqrs");
  std::cout << Solution::mergeAlternately(word1, word2);
}

