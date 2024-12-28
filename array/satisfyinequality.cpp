#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter n";
    cin>>n;
    cout<<"enter m";
    cin>>m;
    int num1[n],num2[m];
    for (int i=0;i<n;i++)
    {
        cin>>num1[i];
        /* code */
    }
     for (int j=0;j< m;j++)
    {
        cin>>num2[j];
        /* code */
    }
    int i=0,j=1;
    
    int c=0;
    while(i<j && i<n-1)
    {
     if(num1[i]-num1[j]<=num2[i]-num2[j]+1)
     {j++;
     c++;
     }
     if(j==m)
     {
        i++;
        j=i+1;
     }

    }
    
   cout<<c;
   return 0;


}