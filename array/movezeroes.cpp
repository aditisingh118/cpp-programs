#include<iostream>
#include<algorithm>
using namespace std;
void movez(int &arr[] ,int n)
{
int count=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]!=0)
  {  swap(arr[i],arr[count]);
  count++;
  }
    /* code */
}
}

int main()
{  int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    movez(arr,n);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        /* code */
    }

    return 0;

}