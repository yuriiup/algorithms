#include <vector>

class Solution {
public:
  int removeElement(std::vector<int> &nums, int val);
};

int Solution::removeElement(std::vector<int> &nums, int val) {
  if (nums.empty())
    return 0;
  int start = 0;
  int end = nums.size() - 1;
  while (start <= end) {
    if (nums[start] == val && nums[end] != val) {
      nums[start] = nums[end];
      start++;
      end--;
    } else if (nums[end] == val) {
      end--;
    } else {
      start++;
    }
  }

  return start;
}