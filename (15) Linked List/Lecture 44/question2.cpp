// You are given the head of a linked list, which contains a series of integers separated by 0 's. The beginning and end of the linked list will have Node.val == 0 .For every two consecutive 0 's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0 's. Return the head of the modified linked list.


Solution=
class Solution {
    public:
        ListNode* mergeNodes(ListNode* head) {
            ListNode* dummy = new ListNode(0);
            ListNode* tail = dummy;
            ListNode* current = head->next; // skip first zero
            int sum = 0;
    
            while (current != nullptr) {
                if (current->val == 0) {
                    // End of a segment
                    ListNode* newNode = new ListNode(sum);
                    tail->next = newNode;
                    tail = newNode;
                    sum = 0;
                } else {
                    sum += current->val;
                }
                current = current->next;
            }
    
            return dummy->next;
        }
    };
    