// Given head which is a reference node to a singly-linked list. The value of each node in thelinked list is either 0 or 1 . The linked list holds the binary representation of a number Return the decimal value of the number in the linked list. [Leetcode 1290]


Solution=
class Solution {
    public:
        int getDecimalValue(ListNode* head) {
            int result = 0;
            
            // Traverse the list and build the binary number
            while (head != nullptr) {
                result = result * 2 + head->val;  // Shift result left and add current node's value
                head = head->next;  // Move to the next node
            }
    
            return result;
        }
    };
    