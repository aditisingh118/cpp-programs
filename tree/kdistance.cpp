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
void kdist(node *root,int k)
{
    if(root==NULL)
    return;
    if(k==0)
    cout<<root->data<<" ";
    else
    {
    kdist(root->left,k-1);
    kdist(root->right,k-1);
    }
}
int main()
{
  int a;
  cout<<"enter root";
  cin>>a;
    struct node *root = Newnode(a);
     root->left=Newnode(5);
    root->right=Newnode(9);
    root->right->right=Newnode(2);
    kdist(root,2);
    return 0;
}
