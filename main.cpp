
#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
   int n,r;
   cout << "Enter a number: ";
   cin >> n;
   cout << "Enter a number: ";
   cin >> r;

   // nCr = n! / (r! * (n-r)!)

   int nCr = factorial(n) / (factorial(r) * factorial(n - r));
   cout << "nCr = " << nCr << endl;


   return 0;
}