#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string first_name;
    string last_name;
    int hours;
    const double pay = 20.00;

    cout << "what is your first name? \n";
    cin >> first_name;
    cout << "what is your last name? \n";
    cin >> last_name;
    cout << "nice to meet you " << first_name << " " << last_name << endl;
    cout << "how many hours do you typically work a week? \n";
    cin >> hours;
    cout << "I will now calculate your bi-weekly, monthly and yearly pay \n";
    cout << endl;

    double bi_weekly_pay = pay * hours * 2;
    double monthly_pay = pay * hours * 4;
    double yearly_pay = monthly_pay * 12;

    cout << bi_weekly_pay<<endl;
    cout << monthly_pay<<endl;
    cout << yearly_pay<<endl;

    cout << "\nPayroll Summary for: " << first_name << " " << last_name << endl;
    cout << setw(20) << "Biweekly Pay: $" << fixed << setprecision(2) << bi_weekly_pay << endl;
    cout << setw(20) << "Monthly Pay: $" << fixed << setprecision(2) << monthly_pay << endl;
    cout << setw(20) << "Yearly Pay: $" << fixed << setprecision(2) << yearly_pay << endl;



    return 0;

}