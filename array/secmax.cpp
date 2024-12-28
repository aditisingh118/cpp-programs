#include<iostream>
using namespace std;
int secmax(int arr[], int n)
{
    int res=-1,lar=0;
    for (int i = 1; i < n; i++)

    {
     if(arr[i]>arr[lar])
     {   res=lar;
        lar=i;
    }
     else if(arr[i]<arr[lar])
    { if(res==-1||arr[i]>arr[res])
       res=i;
    }
    }
    return arr[res];
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
    cout<<secmax(arr,n);
    return 0;

}