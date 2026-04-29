#include <vector>

class Solution {
 public:
  std::vector<int> twoSum(std::vector<int>& numbers, int target);
};

std::vector<int> Solution::twoSum(std::vector<int>& numbers, int target) {
  int start = 0;
  int end = numbers.size() - 1;

  int number;
  while (start < end) {
    number = numbers[start] + numbers[end];
    if (number > target) {
      end--;
    } else if (number < target) {
      start++;
    } else {
      return std::vector<int>{start + 1, end + 1};
    }
  }
  return {};
}