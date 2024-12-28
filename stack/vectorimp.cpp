#include<iostream>
#include<vector>
using namespace std;
struct mystack{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
    int res=v.front();
    v.pop_back();
    return res;
    }
    int size()
   { return v.size();
}
bool isempty()
{
    return v.empty();

}
int peek()
{
    return v.back();
}
};
int main()
{ int n;
    mystack s;
    cout<<"enter a value";
    cin>>n;
    s.push(n);
    s.push(45);
    s.push(12);
    s.push(16);
    s.pop();
    cout<<s.peek();
    return 0;

}