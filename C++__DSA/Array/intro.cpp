#include<iostream>
using namespace std;

void printarray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int number[15];

    cout<< "Value at 1 index " <<number[1] << endl;
    
    cout<<endl<< " Everything is Fine " <<endl;

    int second[3] = {5, 7, 11};

    cout<< "Value at 2 index " <<second[2] << endl;

    int third[15] = {2, 7};

    int n=15;
    printarray(third, 15);

    int secondsize = sizeof(second)/sizeof(int);
    cout<< endl <<" Size of second is " << secondsize <<endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;

    for(int i=0; i<5; i++) {
        cout << ch[i]<< " ";
    }

    return 0;
}