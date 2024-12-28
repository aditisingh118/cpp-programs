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
vector<int> createbst(vector<int> arr,int n)
{  
    


}
  
int main()
{  int n;
    cout<<"enter size";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
   arr.push_back(a)
  } 
  createbst(arr,n)
}
     
