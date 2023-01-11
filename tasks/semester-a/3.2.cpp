#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << sqrt(9.0) << endl;
    // Task 2.1
    cout << sqrt(7.0) << endl;
    cout << log(1.1) << endl;
    cout << pow(2.5, 3.0) << endl;
    cout << ceil(4.1) << endl;
    cout << (7 + sqrt(7.0)) / 3.0 << endl;
    cout << tanh(0.342) << endl;
    cout << fmod(11.0, 4.0) << endl;
    cout << abs(-9) << endl;
    cout << fabs(-4.5) << endl;
    cout << floor(8.8) << endl;
    cout << log10(1.0) << endl;
    cout << cbrt(10.) << endl;
    // Task 2.2
    cout << (2 / 15) - ((1 / 3) - sin(0.5)) << endl;
    cout << (-5 / 13) + ((1 / 3) - tanh(0.3)) << endl;
    cout << (-(1 / 7) - 2) << endl;

    // Task 2.2 Cont.
    cout << pow(abs(-9 * pow(-5, -2) - 1), sin(1)) * (pow(4 / 2, 2) + pow(3, 2) - cbrt(5)) << endl;
    cout << sqrt(17 / 3) << endl;

    // Task 2.3
    double x;
    cout << "Please enter a value for x:\nNote: Please do not enter 0." << endl;
    cin >> x;
    cout << "csch(x) = " << 1 / (sinh(x)) << endl;
    cout << "asinh(x) = " << log(x + sqrt(pow(x, 2) + 1)) << endl;
    cout << "acsch(x) = " << log((1 / x) + (sqrt(pow(x, 2) + 1)) / abs(x)) << endl;

    return 0;
}