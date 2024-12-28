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
int height(node *root)
{
    if(root==NULL)
    return 0;
    else
    return max(height(root->left),height(root->right))+1;
}
int main()
{  int a;
    cout<<"enter root";
    cin>>a;
     struct node *root = Newnode(a);
     root->left=Newnode(5);
    root->right=Newnode(9);
    root->right->right=Newnode(2);
    
    cout<<height(root);

    return 0;

}


