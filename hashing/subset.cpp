#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool hashfun(vector<int> a,vector<int> b)
{
   unordered_set<int> se(a.begin(),a.end());
    for(int j=0;j<b.size();j++)
    {
        if(se.find(b[j])==se.end())
        return false;
    }
    return true;


}

int main()
{
    vector<int> arr1={2,4,6,2,13,0,9,6};
    vector<int> arr2={2,13,0,9,6,98};
   if(hashfun(arr1,arr2))
   cout<<"yes";
   else 
   cout<<"no";
   return 0;

}