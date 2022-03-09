#include <iostream>
using namespace std;

int main() {
  cout << "Hello & Welcome to the Tax Calculator!\n";

  float cost,tax,total;

  cout <<"\n Hello, How much is this item? : " ;
  cin >>cost;
  tax=cost*.2;
  total=cost+tax;

  cout <<"\n The tax payable of your item is £"<<tax;
  cout <<"\n The total cost plus tax of your item is £"<<total;
  }