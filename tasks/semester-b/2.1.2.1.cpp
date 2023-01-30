#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0)); // seed the RNG with the current time
    int i;          // declaration of counter
    int lucky[6];   // declaration of the lucky number array for 6 numbers

    for (i = 0; i < 6; i++) // populate the lucky[] array
    {
        lucky[i] = (rand() % 50) + 1; // generates random integers between 1 and 50
    }

    cout << "Your lucky numbers are" << endl;
    for (i = 0; i < 6; i++) // return the extracted numbers
        cout << lucky[i] << "\t";
    cout << endl;

    return 0;
}
