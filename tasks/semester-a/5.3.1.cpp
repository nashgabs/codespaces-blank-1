/* NAME: Lab5.3.1.cpp
 * DESCRIPTION: Implementation of the Babylonian algorithm for calculating square roots.
 * AUTHOR: Samuel Holliday
 * DATE: 28/11/2022
 */

#include <iostream>
#include <limits>
#include <cmath>
#include <cfloat>

using namespace std;
int main()
{
    cout << "Please enter a number: " << endl;

    int S;    // the argument of our square root
    cin >> S; // take keyboard input

    double x = S / 2;
    double temp_; // our first guess of the square root is 1

    for (temp_ = 1; pow(x - temp_, 2) > DBL_EPSILON; x = temp_) // while the difference between old and new guess is greater than the smallest possible double value
    {
        temp_ = 0.5 * (x + (S / x)); // Babylonian algorithm
    }

    cout << "The square root of your number is approximately " << x << endl; // return to user

    return 0;
}