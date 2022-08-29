#include <iostream>
using namespace std;

int main() {
  //matrix addition
  int matrix1[100][100], matrix2[100][100], result[100][100], r1, c1, r2, c2;
  cout << "Enter rows and columns of first matrix :";
  cin >> r1 >> c1;
  cout << "Enter rows and columns of second matrix :";
  cin >> r2 >> c2;
  if (c1 != r2) {
    cout << "Addition not possible";
    return 0;
  }
  cout << "Enter elements of first matrix :" << endl;
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cout << "Enter element [" << i << "][" << j << "] :";
      cin >> matrix1[i][j];
    }
  }
  cout << "Enter elements of second matrix :" << endl;
  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++) {
      cout << "Enter element [" << i << "][" << j << "] :";
      cin >> matrix2[i][j];
    }
  }
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  cout << "Addition of two matrices is :" << endl;
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }



  return 0;


}