#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
int largestAltitude(vector<int>& gain) {
    int max_val = max(gain[0], 0);
    for (int i = 1; i < gain.size(); i++) {
      gain[i] = gain[i - 1] + gain[i];
      max_val = max(gain[i], max_val);
    }
    return max_val;
  }
};

int main() 
{

}
