//Working function to delete the given node

void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }

//TC: O(1)
