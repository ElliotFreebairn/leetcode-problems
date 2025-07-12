#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
  int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int num : nums) {
      int complement = k - num;

      if (freq[complement] > 0) {
          count++;
          freq[complement]--;
      } else {
          freq[num]++;
      }
    }
    return count;
  }
};

int main() 
{

}
