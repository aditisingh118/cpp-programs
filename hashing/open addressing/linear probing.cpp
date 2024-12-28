#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
struct Hash
{
    int b;
    vector<int> t;
    Hash(int val)
    {
        b=val;
        t.resize(b);
        fill(t.begin(),t.end(),-1);
    }
    void insert(int val)
    {      int i = hashvalue(val);
        while (t[i] != -1) { // Linear probing
            i = (i + 1) % b;
        }
        t[i] = val; // Insert value in the first empty spot
    
    }

    void display()
    {
        for(int i=0;i<b;i++)
        {
            cout<<i<<" "<<t[i]<<endl;
                    }
    }
    int hashvalue(int val)
    {
        return (val%b);
    }

};
int main()
{
    Hash h(7);
    vector<int> v={12,51,45,23,16};
    for(int k:v)
    {
        h.insert(k);
    }
   h.display();
    return 0;
}
