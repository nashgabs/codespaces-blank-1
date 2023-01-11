/* NAME: Lab6.1.1.cpp
 * DESCRIPTION: Prints odd numbers and their cumulative sum.
 * AUTHOR: Samuel Holliday
 * DATE: 28/11/2022
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int sum = 0;
    cout << "Odd numbers and " << setw(10) << "their cumulative odd sum:" << endl;
    for (int i = 0; i < 10; i++)
    {
        // skip even numbers
        if (i % 2 == 0)
            continue;
        sum += i;
        cout << i << setw(30) << sum << endl;
    }
    return 0;
}
