#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0)); // initializes the random number generator 

    // creates a random number between 0 and 20
    int random_number = rand() % 21; 
    int guess;
    int attempts;

    cout << "This is the Guessing Game!" << endl;
    cout << "You have 10 attempts to guess the random number between 0 and 20." << endl;

    attempts = 10; 

    // for loop allowing user to guess the number
    for (int i = 0; i < 10; ++i) {
        cout << "Enter a number: ";
        cin >> guess;

        if (guess == random_number) {
            cout << "You guessed the correct number!" << endl;
            break; // Breaks out of the loop if guessed number is same as random number
        } else {
            cout << "Wrong guess! Try again." << endl;
            attempts--; // Decrement attempts if the guess is wrong
        }
    }

    // If the user is wrong more than 10 times
    if (attempts == 0) {
        cout << "You Lose! Better luck next time." << endl;
    }

    return 0;
}
