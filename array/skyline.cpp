#include<iostream>
#include<vector>
using namespace std;
int main()
{ int overlap=0;
vector<int> res;
int arr[][]={{2,9,10},{3,7,15},{5,12,12}};
for(int i=0,j=0;i<3,j<3;i++,j++)
{
    if(arr[i][1]<arr[i+1][0])
    {
        overlap=1;
    
        int r=arr[i+1][j]-arr[i][j];
        int c=arr[i+1][0];
        res.push_back[i](r,c);



    }
    else
    

}



return 0;
}