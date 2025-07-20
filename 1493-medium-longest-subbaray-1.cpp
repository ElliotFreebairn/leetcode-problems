#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
int longestSubarray(vector<int>& nums) {
    int max_ones = 0;
    int zeros_count = 0;
    int left = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        zeros_count++;
      }

      while (zeros_count > 1) {
        if (nums[left] == 0) {
            zeros_count--;
        }
        left++;
      }
      int width = i - left + 1;
      max_ones = max(max_ones, width - 1);
    }
    return max_ones;
  }
};

int main() 
{

}
