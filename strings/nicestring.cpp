#include<iostream>
#include<string>
using namespace std;
int main()
{  string s;
    cout<<"enter string";
    cin>>s;
    int i=0;
    while(i<s.length())
    {
     if(isupper(s[i]))
     {
        if(s.find(tolower(s[i]))>i && s.find(tolower(s[i]))<s.length())
        {
            cout<<"not nice";
            break;
        }
     }
     else if(islower(s[i]))
     {
        if(s.find(toupper(s[i]))>i && s.find(toupper(s[i]))<s.length())
        {
            cout<<"not nice";
            break;
        }
     }
     else 
     continue;
    }
     cout<<"nice";
    return 0;
}