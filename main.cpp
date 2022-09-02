
#include <iostream>
#include <bitset>
using namespace std;

int main() {

  int n;
  cout << "Enter start number: ";
  cin >> n;

  // number system and conversion functions
   cout << "Decimal: " << n << endl;
   cout << "Binary: " << bitset<8>(n) << endl;
   cout << "Hexadecimal: " << hex << n << endl;
   cout << "Octal: " << oct << n << endl;


  
  

  return 0;
}