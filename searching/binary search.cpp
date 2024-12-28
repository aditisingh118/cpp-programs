#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;

void binarySearch(int arr[], int l, int h, int k) {
    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] == k) {
            cout << "Element found at index: " << mid << endl;
            return;
        } else if (arr[mid] < k) {
            l = mid + 1; // Search in the right half
        } else {
            h = mid - 1; // Search in the left half
        }
    }
    cout << "Element not found" << endl;
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

    binarySearch(arr, 0, n - 1, x);
    return 0;
}
