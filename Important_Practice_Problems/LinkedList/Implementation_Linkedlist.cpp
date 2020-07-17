#include<bits/stdc++.h>
using namespace std;
struct node
{
 int data;
 node* next;
 node(int x)
 {
  data =x;
 next = NULL;
 }
};
/*void push(node** head,int data)
{
 node* temp= new node(data);
 //head->next=temp->next;
 *head=temp;

}*/
void print(node* head)
{
  node* curr= head;
    while(curr)
    {
      cout<<curr->data<<"->";
       curr=curr->next;
    }
}

int main()
{
 node* head;
 node* temp;
 head=temp;
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  int val;
  cin>>val;
  node* temp1=new node(val);
  //push(&head,val);
  //head = temp;
   temp=temp1;
   temp=temp1->next;
 }
    print(head);
}
