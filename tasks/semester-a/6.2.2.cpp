/* NAME: Lab6.2.2.cpp
* DESCRIPTION: A program to calculate a geometric progression and to calculate the sum of all values below a number.
* AUTHOR: Samuel Holliday
* DATE: 28/11/2022
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int ii = 100, n = 1, sum = 0;
	for (int ii = 1; ii < 50; ++ii) {
		if (n > 2004189184) break;
		sum += ii;
		n = n * ii;
		cout << setw(11) << ii << "! = " << n << endl;
	}
	cout << "ii: " << ii << endl << "SUM: " << sum << endl;
}