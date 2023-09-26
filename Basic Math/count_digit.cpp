#include<bits/stdc++.h>
using namespace std;

int count_digits(int n) 
{
    int cnt = 0;
    while(n!=0) 
    {
        n=n/10;
        cnt++;
    }
    return cnt;
}

int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
   return 0;
}