#include <string>

class Solution {
public:
  int strStr(std::string haystack, std::string needle);
};

int Solution::strStr(std::string haystack, std::string needle) {
  if (needle.empty())
    return 0;

  int p1 = 0;
  int p2 = 0;

  while (p1 < haystack.length()) {
    if (haystack[p1] == needle[p2]) {
      p1++;
      p2++;
      if (p2 == needle.length()) {
        return p1 - needle.length();
      }
    } else {
      p1 = p1 - p2 + 1;
      p2 = 0;
    }
  }
  return -1;
}