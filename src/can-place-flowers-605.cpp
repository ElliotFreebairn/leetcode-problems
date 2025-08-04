#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    bool toAdd = (n >= 1);

    if (flowerbed.size() == 1)
    {
        return (toAdd && flowerbed[0] == 1) ? false : true;
    }

    int count = 0;
    // first special case
    if (flowerbed[0] == 0 && flowerbed[1] == 0)
    {
        count++;
        flowerbed[0] = 1;
    }
    // second special case
    if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0)
    {
      count++;
      flowerbed[flowerbed.size() - 1] = 1;
    }

    for (int i = 1; i < flowerbed.size() - 1;)
    {
      if (flowerbed[i] == 1)
      {
          i = ((i + 1) >= flowerbed.size()) ? i + 1 : i + 2;
          continue;
      }
      
      if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
      {
          count++;
          flowerbed[i] =1;
      }
      i++;
    }
    return count >= n;
  }
};

int main() 
{

}
