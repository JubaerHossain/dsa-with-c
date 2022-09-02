
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

   // specific number prime or not
   int num;
   cout << "Enter a number: ";
   cin >> num;
   bool isPrime = true;

   for (int i = 2; i < sqrt(num); i++)
   {
      if (num % i == 0)
      {
         cout << "Not Prime" << endl;
         isPrime = false;
         break;
      }
      
      
   }
   if (isPrime)
   {
      cout << "Prime" << endl;
   }
   

   // prime number between 1 and 100
   int start;
   int end;
   cout << "Enter start number: ";
   cin >> start;
   cout << "Enter end number: ";
   cin >> end;
   for (int i = start; i <= end; i++)
   {
      bool isPrime = true;
      for (int j = 2; j < i; j++)
      {
         if (i % j == 0)
         {
            isPrime = false;
            break;
         }
      }
      if (isPrime)
      {
         cout << i << endl;
      }
   }

   return 0;
}