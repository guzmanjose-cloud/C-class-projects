#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//creates empty string and empty string to be appended
	string plus = "";
	string minus = "++++++++++++";
	
	int count = 0;
	int spaces = 31;
	
	cout << "Pattern A" << setw(23) << "Pattern B \n";
	cout<< "________________________________ \n";
	
	// for loop that runs for 10 iterations, increments count by 1, 
	//adds + by 1 to plus variable and subtracts + from minus variable
	for(count = 0; count <= 10; count++){
		plus += "+";
		minus.pop_back();

		cout << plus << setw(spaces) << minus << "\n";
		
		
		spaces--;

	}
	

	return 0;
}