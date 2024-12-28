#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;

   
int 2dsearch(int arr[][],int r,int c,int x)
{   
    
    while(cs<c)
    {
        if(arr[rs][c-1]<x)
        rs++;
        else if(arr[rs][c-1]>=x)
        {
            binarysearch()
            for(int i=0;i<r-1;i++)
            { int l=0;
            int h=r-1;
            while(l<=h)
            { int mid=l+(h-l)/2;
                if(arr[mid]==x)
                cout<<x;
                else if(arr[mid]<=x)
                h=mid-1;
                else(arr[mid]>=x)
                l=mid+1;
            }

            }
        }
    }




}

int main()
{  int r,c,x;
    cout<<"enter row";
    cin>>r;
    cout<<"enter column"
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;i<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter key";
    cout<<2dsearch(arr,r,c,k);
    return 0;
}