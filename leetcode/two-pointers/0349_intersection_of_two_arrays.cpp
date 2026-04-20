#include <algorithm>
#include <vector>

class Solution {
 public:
  std::vector<int> intersection(std::vector<int>& nums1,
                                std::vector<int>& nums2);
};

std::vector<int> Solution::intersection(std::vector<int>& nums1,
                                        std::vector<int>& nums2) {
  int p1 = 0;
  int p2 = 0;

  std::sort(nums1.begin(), nums1.end());
  std::sort(nums2.begin(), nums2.end());

  std::vector<int> result;
  while (p1 < nums1.size() && p2 < nums2.size()) {
    if (nums1[p1] < nums2[p2]) {
      p1++;
    } else if (nums1[p1] > nums2[p2]) {
      p2++;
    } else if (nums1[p1] == nums2[p2]) {
      if (result.empty() || result.back() != nums1[p1]) {
        result.push_back(nums1[p1]);
      }
      p1++;
      p2++;
    }
  }
  return result;
}