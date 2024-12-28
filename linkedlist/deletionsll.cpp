#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node()
    {
        data=0;
        next=NULL;
    }
    node(int val)
    {
        data=val;
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
int deletebeg(node*& head)
{
node* temp=head;
head=head->next;
return temp->data;

}
int deleteend(node*& head)
{
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    int res=temp->next->data;
    temp->next=NULL;
    return res;
}
void deletepos(node* head,int pos)
{   node* temp=head;
    int i=1;
    while(i<pos-1)
    {
        i++;
        temp=temp->next;
    }
    
    temp->next=temp->next->next;

}

void print(node* head)
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
    int val;
    cout<<"enter a value";
    cin>>val;
    insertbeg(head,val);
    insertbeg(head,90);
    print(head);
    cout<<'\n';
   // cout<<deletebeg(head)<<"deleted";
  // cout<<deleteend(head)<<"deleted";
     cout<<'\n';
     deletepos(head,2);
     print(head);
  return 0;


}