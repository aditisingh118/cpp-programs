#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int bnumber[32];
    int i=0;
    while(n>0)
    {
        bnumber[i]=n%2;
        n=n/2;
        i++;
    }
    int c=0;
    for(int j=0;j<=i-1;j++)
    {
        if(bnumber[j]==1)
        c++;
    }
    cout<<c;
    return 0;
}