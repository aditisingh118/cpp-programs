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
void firstnode(node*& last,int val)
{
if(last!=NULL)
return;
node* temp=new node(val);
temp->next=temp;
last=temp;
cout<<"first node inserted"<<'\n';
}
void insertbeg(node*& last,int data)
{
    node* temp=new node(data);
    temp->next=last->next;
    last->next=temp;

}
void insertend(node*& last ,int data)
{
      node* temp=new node(data);
      temp->next=last->next;
      last->next=temp;
      last=temp;
}
void insertpos(node*& last,int data,int pos)
{   node* temp1=new node(data);
    int i=1;
    node* temp=last->next;
    while(i<pos-1)
    {
        i++;
        temp=temp->next;
    }
    temp1->next=temp->next;
    temp->next=temp1;

}
void print(node* last)
{
    node* temp=last->next;
    
    while(temp!=last)
    {
        cout<<temp->data<<",";
        temp=temp->next;
    }
    cout<<last->data;
}

int main()
{
    node* last=NULL;
    int n;
    cout<<"enter first value";
    cin>>n;
    firstnode(last,n);
    insertbeg(last,36);
    insertend(last,91);
    insertpos(last,34,3);
    print(last);
    return 0;
}