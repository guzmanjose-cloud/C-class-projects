#include <iostream>


using namespace std;

// shows the types of the 5 functions
int addition(int, int);
float subtract(float, float);
double division(double, double);
void voidMod(int, int);
void voidMultiply(int, int);

int main()
{
    int num ;
    int num2 ;
    int add;
    float sub;
    double divide;
    
    //asks for user input and outputs functions
    cout << "please enter 2 numbers..\n";
    cin >> num;
    cin >> num2;
    add = addition(num, num2);
    sub = subtract(num, num2);
    divide = division(num, num2);

    cout << "Addition: " << add << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Division: " << divide << endl;
    
    voidMod(num, num2);
    voidMultiply(num, num2);

    return 0;
}

// Function definitions

int addition(int num, int num2)
{
    return num + num2;
}

float subtract(float num3, float num4)
{
    return num3 - num4;
}

double division(double num5, double num6)
{
    return num5 / num6;
}

void voidMod(int num7, int num8)
{
    int result = num7 % num8;
    cout << "Modulus: " << result << endl;
}

void voidMultiply(int num9, int num10)
{
    double result = num9 * num10;
    cout << "Multiplication: " << result << endl;
}
