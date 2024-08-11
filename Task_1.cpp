#include <iostream>
#include <cstdlib> 
#include <ctime>    

using namespace std;


int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int minNumber = 1; 
    int maxNumber = 100; 
    int randomNumber = generateRandomNumber(minNumber, maxNumber);
    int userGuess = 0; 

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have generated a random number between " << minNumber << " and " << maxNumber << ".\n";
    cout << "Try to guess the number!\n";

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        int difference = abs(userGuess - randomNumber); 

        if (difference < 10) {
            if (userGuess < randomNumber) {
                cout << "Your value is Little low! Try again.\n";
            } else if (userGuess > randomNumber) {
                cout << "Your value is Little high! Try again.\n";
            }
        } else {
            if (userGuess < randomNumber) {
                cout << "Your value is Too low! Try again.\n";
            } else if (userGuess > randomNumber) {
                cout << "Your value is Too high! Try again.\n";
            }
        }
    }

    cout << "Congratulations! You guessed the number correctly.\n";

    return 0;
}
