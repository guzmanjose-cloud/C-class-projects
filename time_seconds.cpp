#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int seconds;
    int month;

    // number of seconds in each month
    const float monthSeconds[] = {
        2678400, // January
        2419200, // February
        2678400, // March
        2592000, // April
        2678400, // May
        2592000, // June
        2678400, // July
        2678400, // August
        2592000, // September
        2678400, // October
        2592000, // November
        2678400  // December
    };

    // constants for time conversion
    const float minutes = 60;
    const float hours = 3600;
    const float days = 86400;

    // asks the user input for seconds
    cout << "Enter a number of seconds: \n";
    cin >> seconds;
    cout << "You entered " << seconds << " seconds\n";

    // Ask user input for a number for the month
    cout << "Enter a number for the month (1 for January, 2 for February, and so on): \n";
    cin >> month;
    cout << "You entered " << month << " for the month\n";

    if (month < 1 || month > 12) {
        cout << "Invalid month number." << endl;
        return 1;
    }

    // Calculate the appropriate time unit based on seconds
    if (seconds >= minutes && seconds < hours)
        cout << "The number of minutes is: " << fixed << setprecision(2) << seconds / minutes << endl;
    else if (seconds >= hours && seconds < days)
        cout << "The number of hours is: " << fixed << setprecision(2) << seconds / hours << endl;
    else if (seconds >= days) {
        cout << "The number of days is: " << fixed << setprecision(2) << seconds / days << endl;
        cout << "The number of days in seconds of " << month << " is: " << fixed << setprecision(2) << seconds / monthSeconds[month - 1] << endl;
    } else
        cout << "The number of seconds is less than 60." << endl;

    return 0;
}
