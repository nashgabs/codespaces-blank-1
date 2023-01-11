/* NAME: Lab6.3.1.cpp
 * DESCRIPTION: A program to calculate and print the terms a mathematical series.
 * Check if the generated series converges to the value of a given relationship.
 * AUTHOR: Samuel Holliday
 * DATE: 28/11/2022
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    int i, m, sum = 0;
    cout << "Please provide an integer: ";
    cin >> m; // user input
    cout << endl
         << "Terms of the series k^3" << endl;
    for (int i = 1; i < m; ++i)
    {
        cout << pow(i, 3) << endl; // print terms
        sum += pow(i, 3);          // add to sum
    }

    cout << "Sum = " << sum << endl
         << "S = " << pow((m * (m + 1) / 2), 2) << endl;
    // print final sum and value of relationship for user to compare
}