#include<iostream>
using namespace std;

bool search(int arr[], int n, int k) {

    for(int i=0; i<n; i++) {

        if(arr[i] == k) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << " Enter The key : " << endl;
    int k;
    cin >> k;

    bool found = search(arr, 10, k);

    if(found) {
        cout <<"Key is present"<<endl;
    }
    else {
        cout<<"Key is absent"<<endl;
    }

    return 0;
}