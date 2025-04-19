// In a linked list of size n , where n is even, the ith node (0-indexed) of the linked list isknown as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1 . [Leetcode 2130]


Solution=
class Solution {
    public:
        int pairSum(ListNode* head) {
            // Step 1: Find the middle of the list
            ListNode* slow = head;
            ListNode* fast = head;
            
            while (fast && fast->next) {
                slow = slow->next;
                fast = fast->next->next;
            }
    
            // Step 2: Reverse the second half
            ListNode* prev = nullptr;
            while (slow) {
                ListNode* nextNode = slow->next;
                slow->next = prev;
                prev = slow;
                slow = nextNode;
            }
    
            // Step 3: Calculate twin sums
            int maxSum = 0;
            ListNode* first = head;
            ListNode* second = prev;
    
            while (second) {
                maxSum = max(maxSum, first->val + second->val);
                first = first->next;
                second = second->next;
            }
    
            return maxSum;
        }
    };
    