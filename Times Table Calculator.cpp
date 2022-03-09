#include <iostream>
//APires CyberAcademy TTA
//Feb 2022 C++ Part 2
//HLT 2)
//Program that asks which times table they would like to display and output this
using namespace std;

int main() {
  int num;
  int num2 = 1;//starting value
  cout << "\nHello & Welcome to the times table calculator! ";
  cout << "\nPlease enter a number: ";//user can enter any integer
  cin >> num;

for (int i = 1; i <= 10; ++i) { 
//For Loop
  cout << num << " x " << i << " = " << num * i << endl;//endl works as \n creates a new line
  }
  
return 0;
}