/* NAME: Lab5.2.1.cpp
* DESCRIPTION: The do-while control statement.
* AUTHOR: Samuel Holliday
* DATE: 21/11/2022
*/

#include <iostream>
using namespace std;
int main() {
	int n = 1;
	int i = 1;
	// take user input
	int x;
	cout << "Please enter an integer and press <Enter>\n";
	cin >> x;
	//

	do
	{
		n *= i++;
	} while (i < x); //

	// return user input
	cout << endl << "The factorial of " << x << " is " << n << endl;
	//

	return 0;
}