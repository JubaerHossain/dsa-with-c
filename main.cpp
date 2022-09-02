
#include <iostream>
#include <math.h>
using namespace std;

int fibonacci(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else if (n == 1)
   {
      return 1;
   }
   else
   {
      int t1 = 0, t2 = 1, nextTerm = 0;

      for (int i = 1; i <= n; i++)
      {
         cout << t1 << ", ";
         nextTerm = t1 + t2;
         t1 = t2;
         t2 = nextTerm;
      }
      return 0;
   }
}

int main()
{

   int n;
   cout << "Enter a number: ";
   cin >> n;
   cout << "Fibonacci Series: " << endl;
   fibonacci(n);

   return 0;
}