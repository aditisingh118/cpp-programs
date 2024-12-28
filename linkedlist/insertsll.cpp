#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
    node()
    {
        data=0;
        next=NULL;
    }
};
void insertbeg( node*& head,int val)
{ node *temp=new node(val);
   
    if(head==NULL)
    { head=temp;
     return;
     }
        temp->next=head;
        head=temp;
}
void insertend(node*& head,int val)
{
    node* temp=head;
    node* temp1=new node(val);

    while(temp->next!=NULL)
   { temp=temp->next;
   }
    temp->next=temp1;
    return ;
    
}
void insertpos(node*& head,int val,int pos)
{
    int i=1;
    
    node* temp=head;
    node* temp1=new node(val);
    while(i<pos-1)
    {
        i++;
        temp=temp->next;
    }
    temp1->next=temp->next;
    temp->next=temp1;
    return;

}

void print(node* head)
{ node* temp=head;
   if(head==NULL)
   return ;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
 node* head=NULL;
 int headval;
 cout<<"enter first value";
 cin>>headval;
 insertbeg(head,headval);
 
 insertbeg(head,24);
 insertend(head,90);
 insertpos(head,13,3);
 print(head);
 return 0;
}