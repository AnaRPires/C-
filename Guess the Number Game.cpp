#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {
int guessLimit = 6;
srand(time(NULL));
int guess;
//Need to seed the rand function - not rand otherwise!
int num = rand() % 100 + 1 ;//generates a random number bet 1-100

cout << "\nWelcome to the Guess a Number Game! ";
//iteration while loop
    do {
        cout << "\nPlease guess a number : ";//user to input a guess
        cin >> guess;
        cout << "\nYour random number is "<<num; //computer generates a number
    if (guess < num)
        cout <<"\nSorry, wrong guess, have another go! ";
    else if (guess > num)
        cout << "\nSorry, you're guess is too high! Try again";
    else 
        cout <<" Whoop Whoop, you have guessed the right number!:) " <<endl; }     
    while (guess != num); 

//Let user know if their guess is correct or not
//well done! you have guessed the number :)
//if guessed incorrectly then have another go!
//limit to 6 guesses
return 0; 
}