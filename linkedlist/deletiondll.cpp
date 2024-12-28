#include<iostream>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
    node()
    {
        data=0;
        prev=NULL;
        next=NULL;
    }
    node(int val)
    {
        data=val;
        prev=NULL;
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
void deletebeg(node*& head)
{
    int p=head->data;
    node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    cout<<p<<"deleted "<<'\n';
    temp->next=NULL;
}

void deleteend(node*& head)
{
if(head==NULL)
{
cout<<"empty list";
return;
}
node* temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
 if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        // If there's only one node, update head to NULL
        head = NULL;
    }
    delete temp;
/*cout<<temp->data<<"deleted";
temp->prev->next=NULL;*/
}
void print(node*& head)
{
    if(head==NULL)
   { cout<<"empty";
    return;
}
   
   else
   { node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
}
int main()
{
    node* head=NULL;
    insertbeg(head,38);
    insertbeg(head,71);
    insertbeg(head,82);
     print(head);
   //deletebeg(head);
   
   deleteend(head);
    print(head);
   
return 0;
}
