// Given the head of a sorted linked list, delete all nodes that have duplicate numbers,leaving only distinct numbers from the original list. Return the linked list sorted as well.[Leetcode 82]


Solution=
class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            if (!head || !head->next) return head;
    
            ListNode* dummy = new ListNode(0); // dummy node before head
            dummy->next = head;
            ListNode* prev = dummy;
    
            while (head) {
                // Check for duplicates
                if (head->next && head->val == head->next->val) {
                    int duplicateVal = head->val;
                    // Skip all nodes with duplicate value
                    while (head && head->val == duplicateVal) {
                        head = head->next;
                    }
                    prev->next = head; // link to next unique node
                } else {
                    // No duplicate, move prev
                    prev = prev->next;
                    head = head->next;
                }
            }
    
            return dummy->next;
        }
    };
    