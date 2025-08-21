// Code implement power function in O(logn) time complexity.


#include <iostream>

using namespace std;

double myPow(double x, int n) {
   long long exp = n;
   if (exp < 0) {
      x = 1 / x;
      exp = -exp;
   }

   double result = 1.0;
   while (exp > 0) {
      if (exp % 2 == 1) {
            result *= x;
      }
      x *= x;
      exp /= 2;
   }

   return result;
}

int main() {
   int base = 3;
   int exp = 9;
   int result = myPow(base, exp);
   cout << "Base: " << base << endl;
   cout << "Exponent: " << exp << endl;
   cout << "Result: " << result << endl;
   return 0;
}