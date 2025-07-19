#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
 int longestOnes(vector<int>& nums, int k) {
    int left = 0;
    int right = 0;
    int num_zeros = 0;
    int max_ones = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        num_zeros++;
      }

      while (num_zeros > k) {
        if (nums[left] == 0) {
          num_zeros--;
        }
        left++;
      }

      int width = i - left + 1;
      max_ones = max(max_ones, width);
    }

    return max_ones;
  }
};

int main() 
{

}
