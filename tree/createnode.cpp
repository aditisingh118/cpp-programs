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
int main()
{  int a;
    cout<<"enter root";
    cin>>a;
     struct node *root = Newnode(a);
     root->left=Newnode(5);
    cout<<root->left->data;
    return 0;

}

