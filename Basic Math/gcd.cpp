#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=4,n2=8;
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 || n2%i==0)
        {
            gcd=i;
        }
    }
    cout << "The GCD of the two numbers is "<<gcd;
}