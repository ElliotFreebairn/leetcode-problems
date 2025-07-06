#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;
class Solution
{
public:
 bool increasingTriplet(vector<int>& nums) {
        int firstSmallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= firstSmallest) {
                firstSmallest = nums[i];
            } else if (nums[i] <= secondSmallest) {
                secondSmallest = nums[i];
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() 
{

}
