#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

void numberGuessingGame() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations!! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (userGuess != numberToGuess);
}

int main() {
    numberGuessingGame();
    return 0;
}

