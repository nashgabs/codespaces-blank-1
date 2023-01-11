/* NAME: Lab5.2.2.cpp
* DESCRIPTION: Calculation of the factorial using the do-while loop
* AUTHOR: Samuel Holliday
* DATE: 21/11/2022
*/

#include <iostream>
#include <cfloat>
#include <stddef.h>
#include <limits.h>

using namespace std;
int main() {
	unsigned long long n = 1; //changed to long long
	int i = 1; //must begin at 1, 0 will carry-through to output 0
	// take user input
	int x;
	cout << "Please enter an integer and press <Enter>\n";
	cin >> x;
	//

	do
	{
		n *= i++;
	} while (i < (x+1));
	//

	// return user input
	cout << endl << "The factorial of " << x << " is " << n << endl;
	//

	return 0;
}

/*
FINISHING NOTES: The max factorial before modifications was 12! Anything higher than this exceeded the data type's max value and resulted in overflow. long long int has a maximum of 20! in this experiment.
*/