#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;


void ternarysearch(int arr[], int l, int h, int k) {
   int mid1= l+(h-l)/3;
   int mid2=h-(h-l)/3;
   
   if(k==arr[mid1])
   cout<<mid1;
   else if(k==arr[mid2])
   cout<<mid2;
  else if(k<arr[mid1])
   ternarysearch(arr,l,mid1-1,k);
   else if(k>arr[mid1]&&k<arr[mid2])
   ternarysearch(arr,mid1+1,mid2-1,k);
   else if(k>arr[mid2])
   ternarysearch(arr,mid2+1,h,k);

}

int main() {
    int n, x;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    cout << "Enter value to search: ";
    cin >> x;

    ternarysearch(arr,0,n - 1,x);
    return 0;
}
