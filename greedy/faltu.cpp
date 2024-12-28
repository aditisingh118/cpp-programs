#include<iostream>
#include<algorithm>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={2,6,-1,-2,5};
    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++)
    {cout<<arr[i]<<" ";
    }
    return 0;
}