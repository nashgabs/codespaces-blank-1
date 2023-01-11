/* NAME: Lab5.1.1.cpp
* DESCRIPTION: Calculate some statistical properties from a set of numbers.
* AUTHOR: Samuel Holliday
* DATE: 21/11/2022
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int count = 0;
	double x[6]{};
	double min = 1e10; // set the variable min to a large number

	double sum, max, mean, stdDev;
	sum = max = mean = stdDev = 0;

	// ask the user to input 6 number from the keyboard
	cout << "Enter 6 numbers separated by a single space, press <Enter>: ";
	while (count < 6)
	{
		cin >> x[count];
		sum += x[count];
		// check if x is small than min and in case assign min to x
		if (x[count] < min) min = x[count];
		if (x[count] > max) max = x[count];
		count++;
	}

	count = 0;
	mean = sum / 6;
	
	// calculate standard deviation naively, iteratively
	while (count < 6)
	{
		stdDev += pow(x[count] - mean, 2);
		count++;
	}
	stdDev = sqrt(stdDev / 6);
	//

	cout << x[5] << endl;
	cout << "The minimum number is " << setprecision(10) << min << endl;
	cout << "The mean value is " << setprecision(10) << mean << endl;

	// print maximum
	cout << "The maximum number is " << setprecision(10) << max << endl;
	// print standard deviation
	cout << "The standard deviation is " << setprecision(10) << stdDev << endl;
	//

	return 0;
}