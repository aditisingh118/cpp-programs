#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int v)
    {   
        data=v;
        left=right=NULL;
    }
};
void preorder( struct node* root)
{   if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main()
{  int r;
    cout<<"enter root";
    cin>>r;
    struct node* root= new node(r);
    root->left= new node(7);
    root->right=new node(4);
    root->left->left= new node(3);
    root->right->left=new node(1);
    preorder(root);
    return 0;
}