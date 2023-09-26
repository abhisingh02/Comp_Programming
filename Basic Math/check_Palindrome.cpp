#include <bits/stdc++.h>
using namespace std;

int Palindrome(int x) {
   int y = 0;
   while (x > 0) {
      int digit = x % 10;
      y = y * 10 + digit;
      x = x / 10;
   }
   return y;
}
int main() {
   int x = 121;
   int dup = x;
   int y = Palindrome(x);
   if (dup == y) {
      cout << "Yes" << endl;
   } else {
      cout << "No" << endl;
   }
   return 0;
}