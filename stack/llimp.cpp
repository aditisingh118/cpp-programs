#include<iostream>
using namespace std;
 struct node{
    int data;
    struct node* next;
    node(int val)
    {
    data=val;
    next=NULL;
    }
    };
    class stack {
     node * head;
        public:
    void push(int x)
   {
    node* temp=new node(x);
    temp->next=head;
    head=temp;
   }
   int pop()
   {
    int res=head->data;
    node* temp=head;
    head=head->next;
    delete(temp);
    return res;
 }
 int peek()
 {
    return head->data;
 }
 };

 int main()
 { 
     stack n;
    n.push(78);
    n.push(90);
    n.push(56);
    n.pop();
   cout<<n.peek();
   return 0;
 }
