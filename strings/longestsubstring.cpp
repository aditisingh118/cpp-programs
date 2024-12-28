#include<iostream>
using namespace std;
int longsubstr(string s1,string s2,int n,int m)
{
    if(n==0||m==0)
    return 0;
    if(s1[n-1]==s2[m-1])
    return 1+longsubstr(s1,s2,n-1,m-1);
    else
    return max(longsubstr(s1,s2,n,m-1),longsubstr(s1,s2,n-1,m));
}
int main()
{
    string s1,s2;
    cout<<"enter strings";
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    cout<<longsubstr(s1,s2,n,m);
    return 0;

}