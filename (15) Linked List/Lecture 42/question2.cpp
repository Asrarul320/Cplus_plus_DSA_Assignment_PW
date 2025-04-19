// You are given two linked lists: list1 and list2 of sizes n and m respectively.Remove list1 s nodes from the ath node to the bth node, and put list2 in their place.[Leetcode 1669]



Solution=
class Solution {
    public:
        ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
            ListNode* prevA = list1;
            // Step 1: Move to node before position a
            for (int i = 0; i < a - 1; ++i) {
                prevA = prevA->next;
            }
    
            // Step 2: Move to node after position b
            ListNode* afterB = prevA;
            for (int i = 0; i <= b - a + 1; ++i) {
                afterB = afterB->next;
            }
    
            // Step 3: Connect prevA to list2 head
            prevA->next = list2;
    
            // Step 4: Move to end of list2
            ListNode* tail2 = list2;
            while (tail2->next) {
                tail2 = tail2->next;
            }
    
            // Step 5: Connect tail of list2 to afterB
            tail2->next = afterB;
    
            return list1;
        }
    };
    