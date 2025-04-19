// Given the head of a singly linked list, group all the nodes with odd indices togetherfollowed by the nodes with even indices, and return the reordered list. [Leetcode 328]


Solution=
class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            if (!head || !head->next) return head;
    
            ListNode* odd = head;
            ListNode* even = head->next;
            ListNode* evenHead = even; // Save the head of the even list
            
            // Rearrange the nodes
            while (even && even->next) {
                odd->next = odd->next->next;  // Skip the next node for odd
                even->next = even->next->next; // Skip the next node for even
                
                odd = odd->next; // Move to the next odd node
                even = even->next; // Move to the next even node
            }
            
            // Connect the odd list to the even list
            odd->next = evenHead;
    
            return head;
        }
    };
    