#include<iostream>
using namespace std;
int lcs(string a,string b,int n,int m)
{
    if(n==0||m==0)
        return 0;
     if(a[n-1]==b[m-1])
         return  1+lcs(a,b,n-1,m-1);
     else if(a[n-1]!=b[m-1])
         return max(lcs(a,b,n-1,m),lcs(a,b,n,m-1)); 
}
int tutzkiAndLcs(string a, string b) {
    int res=0;
    int n=a.size();
    int m=b.size();
   int len=lcs(a,b,n,m);
    int x=len;
    for(int i=0,j=0;j<m;j++)
    {
        if(a[i]==b[j])
        {
            x--;
            i++;
        }
        if(i==n|| x==1)
        {    e=j;
            s=j-len+1;
         e1=i-1;
         s1=i-len+1;
        }
    }
    if(s-1>=0)
    {   val=b[s-1];
        string k= a.substr(s1,len);
        string l=b.substr(s-1,len+1);
     for(int i=0;i<k.length()+1;i++)
     {
         k.insert(i,val);
         if(strcmp(k,l)==1)
             res++;
         k.erase(i);
}
    }
       if(e+1<m)
    {   val=b[e+1];
        string k= a.substr(s1,len);
        string l=b.substr(s-1,len+1);
     for(int i=0;i<k.length()+1;i++)
     {
         k.insert(i,val);
         if(strcmp(k,l)==1)
             res++;
         k.erase(i);
}
     return res;
    }
int main()
{
    
    string s1,s2;
    cout<<"enter strings";
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    tutzkiAndLcs(s1,s2);
    return 0;

}

