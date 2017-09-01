/* This is a simple guess the number game */

using namespace std;

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int guessesTaken = 0;

cout << "Hello! What is your name? ";

string myName;
cin >> myName;

int number;
srand(time(NULL));
number = rand() % 20 + 1;

cout << "Well, " + myName + ", I am thinking of a number between 1 and 20. Take a guess. ";

while (guessesTaken < 6){
    string sguess;
    cin >> sguess;
    int guess = atoi(sguess.c_str());

    guessesTaken++;

    if (guess == number){
        cout << "Well done " << myName << "You've guessed correctly. You managed to guess the number in " << guessesTaken << " guesses.";
    }
    else if (guess > number){
        cout << "Your guess was too high! Try again. ";
    }
    else if (guess < number){
        cout << "Your guess was too low! Try again. ";
    }
}

cout << "Unlucky. You did not guess the correct number. It was " << number << ".";

return 0;
}
