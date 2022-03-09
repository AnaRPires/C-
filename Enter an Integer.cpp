//APires TTA Feb 22 HLT 1)
//Program that asks the user to enter an Integer
#include <iostream>
//std means standard
//Using namespace std "replaces" the need to enter std:: in every line
using namespace std;

int main() {

  //Declare the variables
  int number;
  //integer input
  cout << "Hello & Welcome to the Integer Input Game!\n";
  cout << "Have a think and enter an integer: ";
  //output
  cin >> number;

  //Display the integer
  cout << "You have entered integer: " << number;

  //2 times that number is:
  cout << "\nQuick Maths, let me tell you what 2 times that number is: \n";
  cout <<number*2;
  
}