#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
int maxArea(vector<int>& height) {
  int left = 0;
  int right = height.size() - 1;
  int max_area = 0;

  while (left < right) {
      int width = right - left;
      int min_height = min(height[left], height[right]);
      int area = width * min_height;

      max_area = max(max_area, area);
      if (height[left] < height[right]) {
          left += 1;
      } else {
          right -= 1;
      }
  }

  return max_area;
}
};

int main() 
{

}
