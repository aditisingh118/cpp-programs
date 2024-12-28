#include<iostream>
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
node* lca(node* root,node* p,node* q)
{
if(root==NULL||root==p||root==q)
    return root;
   node* left=lca(root->left,p,q);
   node* right=lca(root->right,p,q);
   if(left==NULL)
  return right;
  else if(right==NULL)
  return left;
  else 
  return root;
}
int main()
{   int a,p,q;
    cout<<"enter root";
    cin>>a;
     struct node *root = Newnode(a);
     root->left=Newnode(6);
     root->right=Newnode(5);
     root->left->left=Newnode(9);
     root->left->right=Newnode(4);
     
     node* ans=lca(root,root->left->left,root->right);
     cout<<ans->data;
    return 0;

}

