#include <iostream>
//Do while
using namespace std;

int main() {
  int num = 3; // 3 times table
  int num2 = 1; // starting value
  do {
    cout << num2 << " x "<<num<<"= "<<num*num2<<"\n";
    num2++; // adds 1
  }
  while (num2 < 11); // repeats while num2 is less than 11
  return 0;
}