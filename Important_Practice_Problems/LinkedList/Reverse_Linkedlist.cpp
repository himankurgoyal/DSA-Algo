ListNode* reverseList(ListNode* head) {
        ListNode* curr,*prev,*next;
        curr=head;
        prev=NULL;
        next=NULL;
        while(curr!=NULL)
        {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
        }
        head=prev;
        return head;
    }
//TC:O(n)
