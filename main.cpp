
#include <iostream>
#include <math.h>
using namespace std;


int factorial(int r){
    int fact = 1;
    for(int i = 2; i <= r; i++){
        fact = fact * i;
    }
    return fact;
}


int main()
{
   int n;
   cout << "Enter a number: ";
   cin >> n;

   // pascal's triangle

   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j <= i; j++)
    {
           int nCr = factorial(i) / (factorial(j) * factorial(i - j));
           cout << nCr << " ";
    }
    cout << endl;
    
   }
   




   return 0;
}