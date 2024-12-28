#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int n,x;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];  
          }system("cls");
    
        cout<<"enter value to search";
        cin>>x;
        for (int i = 0;i<n; i++)
        {
            if(arr[i]==x)
            cout<<i+1;
            /* code */
        }
        
    return 0;
}