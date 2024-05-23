// Jose Antonio Guzman

#include <iostream>
#include "SavingsAccount.h"
#include <string>
#include <iomanip>
using namespace std;

int main(){
    // creates an object of the SavingsAccount constructor
    // and assigns username, password and balance parameters
    SavingsAccount account("guzman", "Tank7!", 1000); 
    string username ;
    string password ;
    int attempts = 3;

    // user has 3 attempts to log in correctly or program will close
    while (attempts > 0) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        // if authenticate parameters match user input then statement is True 
        // and program will go to displayMenu function
        if (account.authenticate(username, password)) {
            account.displayMenu();
            break;
        } else {
            cout << "Invalid username or password. Please try again.\n";
            //subtracts attempts by 1 every time user enters wrongs information
            attempts--;
        }
    }
    // if attempts equal to zero is True then program ends
    if (attempts == 0) {
        cout << "Too many failed attempts. Exiting...\n";
        return 1; // return 1 indicates that the prgram has ended do to an error
    }

}

// creates a function called SavingsAccount from the constructor in .h file
// and sets what parameters need to be obtained
SavingsAccount::SavingsAccount(string uname, string pwd, double balance) {
    username = uname;
    password = pwd;
    startingBalance = balance;
    currentBalance = startingBalance;
    interestRate = 0.01; // 1% interest rate
}

//creates a menu function from the Savings account constructor 
//and lets the user choose how to proceed
void SavingsAccount::displayMenu() {
    
    cout << "Menu Options:\n";
    cout << "1. Withdraw\n";
    cout << "2. Deposit\n";
    cout << "3. Display Balance\n";
    cout << "4. Display current interest\n";
    cout << "5. Exit\n";

 
    int choice; // creates a int variable called choice
    cout << "Enter your choice: ";
    cin >> choice; // assigns the user input to choice


    switch (choice) {
        case 1:
            double withdrawAmount;
            cout << "Enter the amount to withdraw: ";
            cin >> withdrawAmount; 
            withdraw(withdrawAmount); // runs withdraw function then displays balance and 
            displayBalance();         // Displays balance
            redirect();               // asks user if they would like to return to menu then breaks
            break;
        case 2:
            double depositAmount;
            cout << "Enter the amount to deposit: ";
            cin >> depositAmount;
            deposit(depositAmount); // runs deposit function then displays balance and 
            displayBalance();       // Displays balance
            redirect();             // asks user if they would like to return to menu then breaks
            break;
        case 3:
            cout << "your current balance is: ";
            displayBalance(); // runs display menu function 
            redirect();       // runs redirct function
            break;
        case 4:
            cout << "current interest accrued is: " << endl;
            calculateInterest(); // runs calculateInterest function
            redirect();          // runs redirect function
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            displayMenu(); // if user input is invalid displayMenu will run again
    }
}

void SavingsAccount::withdraw(double amount) {
    // conditional if/else statement used to withdraw funds 
    if (amount > currentBalance) { 
        cout << "Sorry, insufficient funds.\n";
    } else if (amount < 0) {
        cout << "Negative entries are not allowed.\n";
    } else {
        currentBalance -= amount; // if first to statements are false then amount is subtracted from current balance
        cout << "Withdrawal of $" << amount << " successful.\n";
    }
}

void SavingsAccount::deposit(double amount) {
    // uses if/else statement for deposit
    if (amount < 0) { //checks if amount is less then 0
        cout << "Negative entries are not allowed.\n";
    } else {
        currentBalance += amount; // if first statement is false then amount is added to current balance
        cout << "Deposit of $" << amount << " successful.\n";
    }
}

void SavingsAccount::displayBalance() {
    // this function prints the current balance 
    cout << "Current Balance: $" << fixed << setprecision(2)  << currentBalance << endl;
}

void SavingsAccount::calculateInterest() {
    // checks interest accrued 
    double interest = currentBalance * interestRate;
    currentBalance += interest; // interest is added to current balance
    cout << "Interest accrued: $" << interest << endl;
}

// checks to see if username and password is accurate, 
bool SavingsAccount::authenticate(string uname, string pwd) {
    //if uname parameter is equal to username and pwd 
    //parameter is equal to password then statement is True 
    return (uname == username && pwd == password);

}

// this function asks the user if they would like be redirected to the main menu 
bool SavingsAccount::redirect() {
    
    string option; 
    cout << "Redirect to menu? (yes/no): ";
    cin >> option;

    if (option == "yes") {
        displayMenu();
        return true;
    } else if (option == "no") {
        return false;
    } else {
        cout << "Invalid option. Please enter 'yes' or 'no'." << endl;
        return redirect();
    }
}
