#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
vector<int> shellsort(vector<int> arr,int g)
{  int n=arr.size();
    if(g==1)
    return arr;
int i=0;
int j=n/2;
while(j<=n)
{
    if(arr[i]>arr[j])
    {
        swap(arr[i],arr[j]);
        i++;
        j++;
    }

}
g=g/2;
shellsort(arr,g);
return arr;
}
void insertionsort(vector<int> arr)
{ int n=arr.size();
 for(int i=1;i<n;i++)
    {
         int curr=arr[i];
        int j=i-1;
       
        while(arr[j]>curr && j>=0)
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=curr;
    }
}
int main()
{
    vector<int> arr={8,9,3,5,2,6};
    int n=6;
    system("cls");
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
        /* code */
    }
    int g=n/2;
    shellsort(arr,g);
    cout<<"after shellsort";
     for (int i = 0; i <n ; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    cout<<"after insertion sort";
     for (int i = 0; i <n ; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }

    return 0;
}