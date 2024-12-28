#include<iostream>
#include<queue>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* Newnode(int idata)
{
struct node* node= new struct node;
node->data=idata;
node->left=NULL;
node->right=NULL;
return node;
}
void levelt(node* root)
{
    if(root==NULL)
    return;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    { node* n=q.front();
    q.pop();
    if(n!=NULL)
    {
       cout<<n->data<<" ";
       if(n->left)
       q.push(n->left);
        if(n->right)
       q.push(n->right);
    }
    else if(!q.empty())
    q.push(NULL);
       
    }
        
    }
   
int main()
{  int a;
    cout<<"enter root";
    cin>>a;
     struct node *root = Newnode(a);
     root->left=Newnode(5);
    root->right=Newnode(9);
    root->right->right=Newnode(2);
    levelt(root);
    return 0;
}