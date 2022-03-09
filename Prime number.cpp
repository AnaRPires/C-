//APires Cyber Academy TTA
//Feb 2022
//HLT 1)
//function that inputs an integer. Check whether this number is a prime (or even) number. 

#include <iostream>
using namespace std;

//Define a function
int main() {
  int num,i,verify=0;//enter an integer
  cout << "\n Prime or not? Welcome to the Checker Program! ";
  cout << "\n Please enter an integer to check if it's prime or not: ";
  cin >> num;

  //for loop//if statement
  for(i=1;i<=num; i++){//i increases by value 1
    if(num%i==0)//use modulus
    {
      verify++;
    }
  }
  if(verify==2){
    cout << "This is a prime number!"<<endl;
  }
  else {
    cout << "\nThis is not a prime number!"<<endl;
  }
  
  return 0;
}