//Working Function
//Intersection of Two Linked List
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode* tempA=headA;
       ListNode* tempB=headB;
       while(1)
       {
        if(tempA==tempB)
            break;
         if(tempA==NULL)
             tempA=headB;
          else
              tempA=tempA->next;
          if(tempB==NULL)
              tempB=headA;
           else
              tempB=tempB->next;
       }
        return tempA;
    }
// TC: O(n)
