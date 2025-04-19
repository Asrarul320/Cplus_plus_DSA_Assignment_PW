// ) Given the head of a linked list, reverse the nodes of the list k at a time, and return themodified list. [Leetcode 25]


Solution=
class Solution {
    public:
        ListNode* reverseKGroup(ListNode* head, int k) {
            if (head == nullptr || k == 1) return head;
    
            ListNode dummy(0);
            dummy.next = head;
            ListNode* prevGroupEnd = &dummy;
    
            while (true) {
                // Check if there are at least k nodes to reverse
                ListNode* kth = prevGroupEnd;
                for (int i = 0; i < k && kth != nullptr; ++i) {
                    kth = kth->next;
                }
                if (kth == nullptr) break;
    
                // Reverse k nodes
                ListNode* groupStart = prevGroupEnd->next;
                ListNode* nextGroupStart = kth->next;
    
                // Reverse the group
                ListNode* prev = nextGroupStart;
                ListNode* curr = groupStart;
                while (curr != nextGroupStart) {
                    ListNode* temp = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = temp;
                }
    
                // Connect the previous part with reversed group
                prevGroupEnd->next = kth;
                prevGroupEnd = groupStart;
            }
    
            return dummy.next;
        }
    };
    