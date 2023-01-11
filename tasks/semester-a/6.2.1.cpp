/* NAME: Lab6.2.1.cpp
* DESCRIPTION: A program to calculate a geometric progression
* AUTHOR: Samuel Holliday
* DATE: 28/11/2022
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int ii = 100, n = 1;
	for (int ii = 1; ii < 50; ++ii) {
		if (n > 2004189184) break;
		n = n * ii;
		cout << setw(11) << n << endl << ii << endl;
	}
	cout << ii << endl;
}