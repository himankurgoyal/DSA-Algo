//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order
//and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

//You may assume the two numbers do not contain any leading zero, except the number 0 itself.

//Example:

//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8
//Explanation: 342 + 465 = 807.


 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* l4;
        l4=l3;
        int c=0,sum=0;
        while(l1!=NULL || l2!=NULL)
        {
            sum=0;
          if(c!=0){
              sum++;
              c--;}
          if(l1!=NULL){
              sum+=l1->val;
              l1=l1->next;}
          if(l2!=NULL){
              sum+=l2->val;
              l2=l2->next;}
          if(sum>9){
            sum=sum-10;
            c++;}
          l3->next = new ListNode(sum);
          l3=l3->next;
        }
        if(c!=0)
        {
         l3->next=new ListNode(1);
         l3=l3->next;
        }
      return l4->next;  //Remember to return next of node
    }
    //TC: O(n)
