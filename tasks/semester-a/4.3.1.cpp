/* NAME: Lab 4.3.1.cpp
* DESCRIPTION: syntax of the Switch statement 
* AUTHOR: Samuel Holliday
* DATE: 31/10/2022
*/

#include <iostream>
using namespace std;
int main()
{
	unsigned int i = 3;
	unsigned int n;

	switch (i) {
	case 0:
		n = 1;
		break; // executed for i==0 and i==1
	case 1:
		n = 1;
		break;
	case 2:
		n = 2;
		break;
	case 3:
		n = 6;
		break;
	case 4:
		n = 24;
		break;
	default:
		n = 0;
		break;
	}

	cout << "n = " << n << endl;

	return 0;
}