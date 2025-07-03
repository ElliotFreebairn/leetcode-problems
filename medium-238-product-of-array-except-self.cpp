#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
  vector<int> productExceptSelf(vector<int>& nums) {
      int totalSum = 1;
      int zeroCount = 0;
      vector<int> zeroIndex;
      for (int i = 0; i < nums.size(); i++) {
          if (nums[i] != 0) {
              totalSum *= nums[i];
          }
          else {
              zeroIndex.push_back(i);
              zeroCount++;
          }
      }
      
      for(int i = 0; i < nums.size(); i++)
      {
          bool inZeroIndex = find(zeroIndex.begin(), zeroIndex.end(), i) != zeroIndex.end();
          if ((zeroCount > 0 && !inZeroIndex) || (
              inZeroIndex && zeroCount > 1)) {
              nums[i] = 0;
          }
          else 
          {
              double multiplyVal = inZeroIndex ? 1 : (pow(nums[i], -1));
              nums[i] = int (static_cast<double>(totalSum) * multiplyVal);
          }
      }

      return nums;   
  }
};

int main() 
{

}
