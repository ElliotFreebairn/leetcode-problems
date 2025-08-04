#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
    int max = *std::max_element(candies.begin(), candies.end());
    std::vector<bool> greatestCandies (candies.size(), false);

    for (int i = 0; i < candies.size(); i++) 
    {
      bool value = candies[i] + extraCandies >= max;
      greatestCandies[i] = value;
    }
    return greatestCandies;
  }
};

int main() 
{
    
}
