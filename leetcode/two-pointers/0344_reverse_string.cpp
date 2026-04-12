#include <vector>

class Solution {
 public:
  void reverseString(std::vector<char>& s);
};

void Solution::reverseString(std::vector<char>& s) {
  int start = 0;
  int end = s.size() - 1;

  char temp;
  while (start < end) {
    temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    start++;
    end--;
  }
}
