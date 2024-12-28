#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
struct node {
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
void insert(node*& head1,int val)
{
    node* temp=new node(val);
    temp->next=head1;
    head1=temp;
}
void unionll(node* a,node* b)
{
    unordered_set<int> s;
    node* p=a;
    while(p!=NULL)
    {
        s.insert(p->data);
        p=p->next;
    }
   node* q=b;
   while(q!=NULL)
   {
    if(s.find(q->data)==s.end())
    {
        s.insert(q->data);
        q=q->next;
    }
    else
    q=q->next;
   }
for(auto it=s.begin();it!=s.end();it++)
{
    cout<<*it<<endl;
}
}
void intersectll(node* a,node* b)
{   cout<<endl;
     unordered_set<int> z;
     unordered_set<int> l;
    node* p=a;
    while(p!=NULL)
    {
        z.insert(p->data);
        p=p->next;
    }
   node* q=b;
   while(q!=NULL)
   { if(z.find(q->data)==z.end())
    {
        
        q=q->next;
    }
    else
 {  
    l.insert(q->data);
    q=q->next;
 }

   }
  

for(auto it=l.begin();it!=l.end();it++)
{
    cout<<(*it)<<'\t';
}
}
int main()
{
    node* head1=new node(34);
    node* head2=new node(34);
    insert(head1,65);
    insert(head2,65);
     insert(head1,23);
    insert(head2,21);
     insert(head1,2);
    insert(head2,2);
    unionll(head1,head2);
    intersectll(head1,head2);

return 0;
    


}