 // working functin for printing middle node

 ListNode* middleNode(ListNode* head) {
        ListNode* twice=head;
        ListNode* middle=head;
        if(head!=NULL)
        {
          while(twice && twice->next!=NULL)
          {
           twice=twice->next->next;
           middle=middle->next;
          }
        }
        return middle;
    }
//TC: O(n/2)
