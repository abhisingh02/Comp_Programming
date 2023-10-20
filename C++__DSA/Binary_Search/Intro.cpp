#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k) {

    int s = 0;
    int e = n-1;

    int mid = (s+e)/2;

    while(s<=e) {

        if(arr[mid]==k) {
            return mid;
        }

        if(k>arr[mid]) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }

        mid = (s+e)/2;
    }

    return -1;
}

int main() {

    int even[6] = {2, 4, 8, 11, 12, 18};
    int odd[5] = {3, 8, 11, 14, 18};

    int index = binarySearch(even, 6, 12);

    cout << "Index of 12 is " << index <<endl;

    return 0;
}