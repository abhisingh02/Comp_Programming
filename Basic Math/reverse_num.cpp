#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 123;
    int num =  n;
    int rev = 0;
    while(n!=0)
    {
        int digit = n%10;
        rev = rev*10+digit;
        n = n/10;
    }
    cout<< "The reverse of the " << num << " is " << rev <<endl;
}