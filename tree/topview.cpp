#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<conio.h>
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
 vector<int> topview(node *root)
 {
    vector<int> ans;
    map<int,int> mpp;
    queue<pair<node*,int>> q;
    q.push({root,0});
    while(!q.empty())
    {   auto it=q.front();
        q.pop();
        node* node1=it.first;
        int line=it.second;
        if(mpp.find(line)==mpp.end())
        mpp[line]=node1->data;
        if(node1->left!=NULL)
        q.push({node1->left,line-1});
         if(node1->right!=NULL)
        q.push({node1->right,line+1});
    }
 
    for(auto it: mpp){
        ans.push_back(it.second);
    }
    return ans;
    }
int main()
{  int a;
    system("cls");
    cout<<"enter root";
    cin>>a;
     struct node *root = Newnode(a);

     root->left=Newnode(5);
     root->right=Newnode(9);
     root->left->left=Newnode(14);
     root->right->right=Newnode(17);
     
    
    vector<int> val=topview(root);
    int n=val.size();
    for(int i=0;i<n;i++)
    {
        cout<<val[i]<<" ";
    }

    return 0;
}
