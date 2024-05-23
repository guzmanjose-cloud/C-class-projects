// Jose Antonio Guzman

#include <string>
using namespace std;
// creates a class called SavingsAccount 
class SavingsAccount {
private: //assigns variable attributes to private making it only accessible within the class itself
    string username;
    string password;
    double startingBalance;
    double currentBalance;
    double interestRate;

//creates a constructor of the SavingsAccount class and makes it public along with some method functions for later use
public: 
    SavingsAccount(string uname, string pwd, double balance);
    void displayMenu();
    void withdraw(double amount);
    void deposit(double amount);
    void calculateInterest();
    void displayBalance();
    bool authenticate(string uname, string pwd);
    bool redirect();
};
