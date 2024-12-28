#include<iostream>
using namespace std;
int trap(int arr[],int n)
{    int res=0;
    int i=0,m=0;
    for(int j=1;j<n;j++)
    { if(arr[j]>=arr[i] || j==n-1)
      {
        int f=j;
        res=res+((f-i-1)*min(arr[i],arr[j]))-m;
        m=0;
        i=f;
      }
      else if(arr[j]<arr[i])
      m+=arr[j];
      
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
    cout<<trap(arr,n);
    return 0;

}