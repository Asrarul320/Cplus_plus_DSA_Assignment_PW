// ) Given the head of a singly linked list, sort the list using insertion sort, and return the sortedlist's head. [Leetcode 147]


Solution=
class Solution {
    public:
        ListNode* insertionSortList(ListNode* head) {
            // Dummy node simplifies insertions at head
            ListNode* dummy = new ListNode(0);
            
            while (head != nullptr) {
                ListNode* next = head->next;
    
                // Find the right place to insert current node in sorted list
                ListNode* curr = dummy;
                while (curr->next != nullptr && curr->next->val < head->val) {
                    curr = curr->next;
                }
    
                // Insert head between curr and curr->next
                head->next = curr->next;
                curr->next = head;
    
                // Move to the next node in original list
                head = next;
            }
    
            return dummy->next;
        }
    };
    