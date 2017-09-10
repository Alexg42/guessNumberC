/* This is a simple guess the number game */

using namespace std;

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int guessesTaken = 0;
int maximum;
int maxGuesses;

cout << "Hello! What is your name? " << endl;

string myName;
cin >> myName;

cout << "Hi " + myName + "! What difficulty would you like? Type a number. 1 = Easy, 2 = Medium, 3 = Hard" << endl;

int difficulty;
cin >> difficulty;

if (difficulty == 1){
    maximum = 20;
    maxGuesses = 6;
}

else if (difficulty == 2){
    maximum = 50;
    maxGuesses = 8;
}

else if (difficulty == 3){
    maximum = 100;
    maxGuesses = 10;
}

int number;
srand(time(NULL));
number = rand() % maximum + 1;

cout << "Well, " + myName + ", I am thinking of a number between 1 and " << maximum << ". Take a guess. " << endl;

while (guessesTaken < maxGuesses){
    int guess;
    cin >> guess;

    guessesTaken++;

    if (guess == number){
        cout << "Well done " << myName << "! You've guessed correctly. You managed to guess the number in " << guessesTaken << " guesses.";
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
