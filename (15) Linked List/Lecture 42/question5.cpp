// Find the length of loop in Cycle of Linked List.


Solution=
int countCycleLength(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    // Step 1: Detect the cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        // Cycle detected
        if (slow == fast) {
            // Step 2: Count the length of the loop
            int count = 1;
            ListNode* current = slow->next;
            while (current != slow) {
                count++;
                current = current->next;
            }
            return count;
        }
    }

    // No cycle
    return 0;
}
