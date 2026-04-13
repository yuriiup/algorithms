#include <vector>

class Solution {
 public:
  void moveZeroes(std::vector<int>& nums);
};

void Solution::moveZeroes(std::vector<int>& nums) {
  int fast = 0;
  int slow = 0;

  int temp;
  while (fast < nums.size()) {
    if (nums[fast] != 0) {
      std::swap(nums[fast], nums[slow]);
      slow++;
    }
    fast++;
  }
}