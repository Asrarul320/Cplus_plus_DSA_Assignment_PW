// Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)


Solution=
class Solution {
    public:
        ListNode* swapPairs(ListNode* head) {
            // Dummy node to simplify edge cases
            ListNode* dummy = new ListNode(-1);
            dummy->next = head;
    
            ListNode* prev = dummy;
    
            while (head && head->next) {
                ListNode* first = head;
                ListNode* second = head->next;
    
                // Swapping
                prev->next = second;
                first->next = second->next;
                second->next = first;
    
                // Move pointers forward
                prev = first;
                head = first->next;
            }
    
            return dummy->next;
        }
    };
    