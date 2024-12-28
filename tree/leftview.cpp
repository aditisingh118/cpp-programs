#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
     struct node* left;
    struct node* right;
     node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void leftview(node *root)
{
    if(root==NULL)
    return;
    else
    { queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for (int i = 0; i < n; i++)
        { 
            node* temp=q.front();
            q.pop();
            if(i==1)
            cout<<temp->data<<" ";

            if(temp->left!=NULL)
            q.push(temp->left);

            if(temp->right!=NULL)
            q.push(temp->right);
        }
      
    }
    }
    
    
}
int main()
{ int n;
cout<<"enter root";
cin>>n;
    node *root=new node(n);
    root->left=new node(8);
    root->right=new node(9);
    root->left->left=new node(12);
    root->right->left=new node(90);
    leftview(root);
    return 0;
}