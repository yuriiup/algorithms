class Solution {
public:
  bool isPalindrome(std::string s);
};

bool Solution::isPalindrome(std::string s) {
  if (s.empty())
    return true;

  int start = 0;
  int end = s.length() - 1;
  while (start < end) {
    if (!std::isalnum(s[start])) {
      start++;
    } else if (!std::isalnum(s[end])) {
      end--;
    } else {
      if (std::tolower(s[start]) != std::tolower(s[end])) {
        return false;
      }
      start++;
      end--;
    }
  }
  return true;
}