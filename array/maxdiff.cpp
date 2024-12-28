#include<iostream>
using namespace std;
int maxdiff(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int min1=arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-min1);
        min1=min(min1,arr[i]);

    }
return res;


}
int main()
{  int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    cout<<maxdiff(arr,n);
    return 0;

}