#include <iostream>
#include <iomanip> 

using namespace std;

int main() 
{
    
    double celsius; 
    double fahrenheit;

    // Asks the user for the conversion equation
    cout << "Please enter a value for Celsius: \n";
    cin >> celsius;
    cout << "Number" << setw(14) << "Fahrenheit\n";

    cout << "-------------------------\n";

    // Loop through Celsius temperatures from 1 to 20
    for (int i = 1; i <= 20; i++) {
        
        // celcius to fahrenheit equation
        fahrenheit = celsius * 1.8 + 32.0;

        // Output with 2 decimal places
        cout << fixed << setprecision(2) << i << setw(14) << fahrenheit << endl;

        // Increments Celsius by 1 for the next iteration
        celsius++;
    }

    return 0;
}

