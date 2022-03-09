#include <iostream>
//Apires TTA Feb 2022 HLT 2)
//Program that inputs 3 numbers and outputs the sum of these 3 numbers
using namespace std;

int main() {
  //Create your variables
  int nb1, nb2, nb3;
  int sum;

  //Input 3 integers
  cout << "Hello, please enter your three numbers:\n";
  cin >> nb1 >> nb2 >> nb3;

  //Sum calculation
  sum = nb1 + nb2 + nb3;

  //The result 
  cout << "The total of your three numbers are = " << sum; 

  return 0;

}