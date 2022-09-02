
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n;
   cout << "Enter a number: ";
   cin >> n;

   // armstrong number

   int sum = 0;
   int originalN = n;
   while (n > 0)
   {
      int lastDigit = n % 10;
      int s = pow(lastDigit, 3);
      sum += s;
      n = n / 10;
   }


   if (sum == originalN)
   {
      cout << "Armstrong number";
   }
   else
   {
      cout << "Not an Armstrong number";
   }

   return 0;
}