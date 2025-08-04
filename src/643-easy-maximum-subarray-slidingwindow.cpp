#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
  double findMaxAverage(vector<int>& nums, int k) {
    double currSum = 0;
    for (int i = 0; i < k; i++) {
        currSum += nums[i];
    }
    double largestSum = currSum / static_cast<double>(k);

    for (int i = 1; i <= nums.size() - k; i++) {
        currSum -= nums[i - 1]; // subtract element left of the sliding window
        currSum += nums[i + (k - 1)]; // add the element right of sliding window

        double averageValue = currSum / static_cast<double>(k);
        largestSum = max(averageValue, largestSum);
    }

    return largestSum;
  }
};

int main() 
{

}
