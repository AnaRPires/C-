#include <iostream>
//If statement(conditions)
using namespace std;

int main() {
  int time;
  cout <<"What is the time? :";
  cin >> time;
if (time < 10) {
  cout << "Good Morning!";
}
else if (time < 20 and time!=12) {
 //not equal to 12
  cout <<"Good Day"; 
}
else if (time==12){
// == 12
  cout <<"Good Afternoon";  
}
else {
  cout <<"Good Evening! ";
}
return 0;
}