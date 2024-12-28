#include<iostream>
using namespace std;
struct node
{
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

void insertbeg(node*& head,int val)
{ 
node* temp=new node(val);
if(head==NULL)
{
    head=temp;
    return;
}
 else
{ temp->next=head;
 head->prev=temp;
 head=temp;
 return;
}
}
void insertend(node*& head,int val)
{
node* temp=new node(val);
if(head==NULL)
{
    head=temp;
    return;
}
else
{
node* temp2=head;
while(temp2->next!=NULL)
{
    temp2=temp2->next;
}
temp2->next=temp;
temp->prev=temp2;
}
}
void insertpos(node*& head,int val,int pos)
{
node* temp=new node(val);
node* temp1=head;
int i=1;
while(i<pos-1)
{
    i++;
    temp1=temp1->next;
}
temp->prev=temp1;
temp->next=temp1->next;
temp1->next->prev=temp;
temp1->next=temp;
}

void print(node*&head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    node* head=NULL;
    int n;
    cout<<"enter a value";
    cin>>n;
    insertbeg(head,n);
    insertbeg(head,67);
    //cout<<"one node inserted";
    insertend(head,90);
    insertend(head,8);
    insertpos(head,20,3);
    print(head);
    return 0;
}