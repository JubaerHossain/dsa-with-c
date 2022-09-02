
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

   // specific number prime or not
   int n;
   cout << "Enter a number: ";
   cin >> n;

   // reverse numbers
   int rev = 0;
   int temp = n;
   while (temp != 0)
   {
      int lastDigit = temp % 10;
      rev = rev * 10 + lastDigit;
      temp = temp / 10;
   }

   cout << "Reverse of " << n << " is " << rev << endl;
   

   return 0;
}