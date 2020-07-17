 ListNode* swapPairs(ListNode* head) {
        ListNode* temp;
        temp=head;
        while(temp && temp->next!=NULL)
        {
          swap(temp->val,temp->next->val);
            temp=temp->next->next;
        }
        return head;
    }
//TC: O(n/2)
