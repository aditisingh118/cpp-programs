#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;
struct Hash{
    int b;
    vector<vector<int>> t;
    Hash(int k)
    {
       b=k;
        t.resize(b);
    }
void insert(int val)
{
    int i=hfun(val);
    t[i].push_back(val);

}
void deleteh(int val)
{    int i=hfun(val);
    auto it=find(t[i].begin(),t[i].end(),val);//find function usage
    if(it!=t[i].end())
   { t[i].erase(it);
   }
}
void display()
{
    for(int i=0;i<b;i++)
    {
        cout<<i;
        for(int key:t[i])
       { cout<<"->"<<key;
       }
        cout<<endl;
    }
}
int hfun(int key)
{
return (key%b);
}
};


int main()
{
    vector<int> v= {29,4,6,12,19,22};
    Hash h(7); 
    for (int key : v)
    h.insert(key);
    h.deleteh(12);
    h.display();
    return 0;
}