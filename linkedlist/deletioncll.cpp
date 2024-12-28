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
void deletebeg(node*& last)
{
node* temp=last->next;
last->next=last->next->next;
cout<<temp->data<<"deleted ";
delete temp;

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
    insertbeg(last,81);
    insertbeg(last,36);
    deletebeg(last);
    print(last);
return 0;
}
  
