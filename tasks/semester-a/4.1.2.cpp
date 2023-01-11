/* NAME: Lab 4.2.cpp
* DESCRIPTION: prints the range of the datatypes limits using the <climits> header.
* AUTHOR: Samuel Holliday
* DATE: 31/10/2022
*/

#include <iostream>
#include <climits> // defines the constants SHRT_MIN, etc. using namespace std.

using namespace std;
int main()
{
	// prints some of the constants stored in the <climits> header:
	cout << "minimum short = " << SHRT_MIN << endl;
	cout << "maximum short = " << SHRT_MAX << endl;
	cout << "maximum unsigned short = 0" << endl;
	cout << "maximum unsigned short = " << USHRT_MAX << endl;
	cout << "minimum int = " << INT_MIN << endl;
	cout << "maximum int = " << INT_MAX << endl;
	cout << "minimum unsigned int = 0" << endl;
	cout << "maximum unsigned int = " << UINT_MAX << endl;
	cout << "minimum long floating point = " << LONG_MIN << endl;
	cout << "maximum long floating point = " << LONG_MAX << endl;

	return 0;
}