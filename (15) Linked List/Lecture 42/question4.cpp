// Given the head of a linked list and an integer val , remove all the nodes of the linked list that has Node.val == val , and return the new head


Solution=
class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            ListNode* dummy = new ListNode(-1);
            dummy->next = head;
    
            ListNode* current = dummy;
            while (current->next != nullptr) {
                if (current->next->val == val) {
                    ListNode* temp = current->next;
                    current->next = current->next->next;
                    delete temp; // optional: avoid memory leak
                } else {
                    current = current->next;
                }
            }
    
            ListNode* newHead = dummy->next;
            delete dummy; // free dummy
            return newHead;
        }
    };
    