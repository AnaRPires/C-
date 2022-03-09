/*APires TTA Feb 22 HLT 3)*/
/*Salary Calculator*/

#include <iostream>
using namespace std;

int main() {
  cout << "This is a salary calculator!\n";

  float salary,SalaryYear;

  /*Define a variable*/
  /*int Salary=1500*/
  int Salary;

  /*Ask the user to input their salary (monthly or weekly)*/
  cout << "\nHello, kindly tell us how much do you earn in a month? ";
  cin >> salary;
  SalaryYear=salary*.12;

  /*Display how much they earn in a year*/
  cout << "\nSo, I can tell you that you earn "<<salary*12<<" per year"; 