#include <cmath>
#include <iostream>
#include <vector>

class Solution {
 public:
  std::vector<int> sortedSquares(std::vector<int>& nums);
};

std::vector<int> Solution::sortedSquares(std::vector<int>& nums) {
  if (nums.empty()) {
    return nums;
  }

  int sizes = nums.size();

  int start = 0;
  int end = sizes - 1;
  int pos = sizes - 1;

  std::vector<int> result(sizes);

  while (start <= end) {
    if (std::abs(nums[start]) > std::abs(nums[end])) {
      result[pos] = nums[start] * nums[start];
      start++;
    } else {
      result[pos] = nums[end] * nums[end];
      end--;
    }
    pos--;
  }
  return result;
}

int main() {
  Solution test;
  std::vector<int> data = {-4, -1, 0, 3, 10};

  std::vector<int> res = test.sortedSquares(data);
  for (int x : res)
    std::cout << x << " ";
  return 0;
}