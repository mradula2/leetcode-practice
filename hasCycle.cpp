/**
 * Definition for singly-linked list.
 */
 
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head) {
            return false;
        }
        ListNode* slowPointer = head;
        ListNode* fastPointer = head;

        fastPointer = fastPointer->next;
        if (fastPointer) {
        fastPointer = fastPointer->next;
        } else {
            return false;
        }

        while (fastPointer && slowPointer != fastPointer) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
        }
        
        if (fastPointer) {
            return true;
        } else {
            return false;
        }
    }
};