// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list. [Leetcode 2]


Solution=
class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* dummyHead = new ListNode(0); // Dummy node to simplify code
            ListNode* current = dummyHead;
            int carry = 0;
    
            // Traverse both lists and add corresponding digits
            while (l1 != nullptr || l2 != nullptr || carry != 0) {
                int sum = carry;
                
                if (l1 != nullptr) {
                    sum += l1->val;
                    l1 = l1->next;
                }
                if (l2 != nullptr) {
                    sum += l2->val;
                    l2 = l2->next;
                }
                
                carry = sum / 10;  // Calculate carry for the next iteration
                current->next = new ListNode(sum % 10); // Create a new node with the current digit
                current = current->next; // Move to the next node
            }
    
            return dummyHead->next;  // Return the head of the resulting list
        }
    };
    