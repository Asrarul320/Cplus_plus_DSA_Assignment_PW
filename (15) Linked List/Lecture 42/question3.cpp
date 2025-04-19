// You are given the head of a linked list, and an integer k .Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed). [Leetcode 1721]


Solution= 
class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
            ListNode* first = head;
            ListNode* second = head;
            ListNode* current = head;
    
            int count = 1;
            // Step 1: Find kth node from start
            while (count < k) {
                first = first->next;
                count++;
            }
    
            // Step 2: Use two-pointer method to find kth node from end
            current = first;
            while (current->next != nullptr) {
                current = current->next;
                second = second->next;
            }
    
            // Step 3: Swap values
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
    
            return head;
        }
    };
    