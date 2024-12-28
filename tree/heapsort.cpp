#include<iostream>
#include<conio.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
 int largest=i;
 int l=2*i+1;
 int r=2*i+2;
 if(l<n && (arr[l]>arr[largest]))
 largest=l;
 if(r<n && (arr[r]>arr[largest]))
largest=r;
 if(i!=largest)
 swap(arr[i],arr[largest]);
 heapify(arr,n,largest);
}
 void heapsort( int arr[],int n)
{
    for(int i=n/2 -1;i>=0;i--)
    heapify(arr,n,i);
    for(int i=n-1;i>=0;i--)
  {  swap(arr[0],arr[i]);
heapify(arr,i,0);
  }
}


int main ()
{
    int arr[]={2,8,3,9,3};
    int n=5;
    system("cls");
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    for(int i=n/2 -1;i>=0;i--)
    {
    heapify(arr,n,i);
    }
    for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
heapsort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
return 0;
}
