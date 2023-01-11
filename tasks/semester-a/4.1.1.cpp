/* NAME: Lab 4.1.cpp
* DESCRIPTION: this program shows how to use the function sizeof()
* AUTHOR: Samuel Holliday
* DATE: 31/10/2022
*/

#include <iostream> // This preprocessor allows the use of the cout and cin instructions
using namespace std; // ignore the std part for the cout instruction

int main()
{
	cout << "The size of an int is:\t\t" << sizeof(int) << " bytes.\n";
	cout << "The size of a short int is:\t" << sizeof(short) << " bytes.\n";
	cout << "The size of a long int is:\t" << sizeof(long) << " bytes.\n";
	cout << "The size of a char is:\t\t" << sizeof(char) << " bytes.\n";
	cout << "The size of a float is:\t\t" << sizeof(float) << " bytes.\n";

	cout << "The size of a long double is:\t" << sizeof(long double) << " bytes.\n";
	cout << "The size of an unsigned int is:\t" << sizeof(unsigned int) << " bytes.\n";

	return 0;
}