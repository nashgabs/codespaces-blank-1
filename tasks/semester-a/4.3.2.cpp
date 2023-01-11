/* NAME: Lab 4.3.2.cpp
 * DESCRIPTION: Control the function calculator developed in the Task 3 of LAB 4 using the switch statement.
 * AUTHOR: Samuel Holliday
 * DATE: 31/10/2022
 */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double val = 2.0;
    const double smallnum = 10e-12;
    double x, y;
    int select;
    cout << "FUNCTION LIST" << endl;
    cout << "1) csch(x) " << endl;
    cout << "2) asinh(x)" << endl;
    cout << "3) acsh(x)" << endl;
    cout << "Select a number" << endl;
    cin >> select;
    if (select > 0 && select < 4)
    {
        cout << "Enter a value of x: ";
        cin >> x;
        cout << "For the value of x = " << x << endl;
    }
    /*
     * Starting of the switch selection
     */
    switch (select)
    {
    case 1:
    {
        y = 1 / sinh(x);
        cout << "The function y= 1/sinh(x)";
    }
    break;
    case 2:
    {
        y = log(x + sqrt(pow(x, 2) + 1));
        cout << "The function y = asinh(x) = ";
    }
    break;

    case 3:
    {
        y = log((1 / x) + (sqrt(pow(x, 2) + 1)) / abs(x));
        cout << "The function y = acsch(x) = ";
    }
    break;

    default:
    {
        y = NULL;
        cout << "ERROR: the selection is not avalable" << endl;
        return 1;
    }
    }
    cout << "is equal to ";
    cout << y << endl;
    return 0;
}