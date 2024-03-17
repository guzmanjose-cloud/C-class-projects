#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

// Defines a Coin class to represent the result of a coin toss
class Coin {
public:
    Coin(string side) : side(side) {}

    string getSide() {
        return side;
    }

private:
    string side; // Side of the coin: "Heads" or "Tails"
};

// this Function simulates the tossing of a coin
Coin coinToss() {
    // Generates a random number between 1 and 2
    int random_number = rand() % 2 + 1;
    // If the random number is 1, return a Coin object representing "Heads", otherwise return "Tails"
    if (random_number == 1) {
        return Coin("Heads");
    } else {
        return Coin("Tails");
    }
}

int main() {
    srand(time(0)); // initializes the random number generator with the current time

    int num_tosses;
    cout << "How many times do you want to toss the coin? ";
    cin >> num_tosses;

    int total_heads = 0;
    int total_tails = 0;

    // Simulates the coin tosses and count the number of heads and tails
    for (int i = 0; i < num_tosses; ++i) {
        Coin result = coinToss();
        // Update the counts based on the result of each toss
        if (result.getSide() == "Heads") {
            total_heads++;
        } else {
            total_tails++;
        }
        // Displays the result of each toss
        cout << "Toss result: " << result.getSide() << endl;
    }

    // Displays the total count of heads and tails
    cout << "Total Heads: " << total_heads << endl;
    cout << "Total Tails: " << total_tails << endl;

    // Determines the winner or if it's a tie
    if (total_heads > total_tails) {
        cout << "Heads won!" << endl;
    } else if (total_heads < total_tails) {
        cout << "Tails won!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
