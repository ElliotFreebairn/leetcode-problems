#include <vector>
#include <iostream>

class Solution {
public:
  static std::vector<int> twoSum(std::vector<int>& nums, int target) 
  {
    for (int i = 0; i < nums.size() - 1; i++) 
    {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target)
          return {i, j};
      }
    }
    return {};
  }

};

int main()
{
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  std::cout << Solution::twoSum(nums, target)[0] << " " << Solution::twoSum(nums, target)[1];
}
