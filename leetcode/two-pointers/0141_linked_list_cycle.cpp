struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
 public:
  bool hasCycle(ListNode* head);
};

bool Solution::hasCycle(ListNode* head) {
  ListNode* fast = head;
  ListNode* slow = head;
  while (fast != nullptr && fast->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
    if (slow == fast) {
      return true;
    }
  }
  return false;
}