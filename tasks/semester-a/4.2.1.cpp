/* NAME: Lab 4.2.1.cpp
* DESCRIPTION: a quadratic equation solver
* AUTHOR: Samuel Holliday
* DATE: 31/10/2022
*/

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double a, b, c, d;
	cin >> a >> b >> c;

	double root1, root2;
	root1 = root2 = 0;

	d = b * b - 4 * a * c; // the discriminant

	// testing the discriminant for real solutions to a quadratic
	if (d >= 0.0) {
		// real solutions
		root1 = (-b + sqrt(d)) / (2.0 * a);

		root2 = (-b - sqrt(d)) / (2.0 * a);
	}
	else {
		// complex solutions
		cout << "No real roots." << endl;
		//return error code
		return 1;
	}

	cout << "Roots are " << root1 << " and " << root2 << endl;

	return 0;
}