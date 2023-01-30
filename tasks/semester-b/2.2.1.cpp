#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int i; // counter
    int lucky[6]; // declaration of the lucky number array for 6 numbers
    int pick[6];
    cout << "Enter your six numbers seperated by a space." << endl;
    cin >> pick[i];

    int len = 6; // number of elements in lucky[]

    lucky = draw(6);

    cout << "Your lucky numbers are" << endl;
    for(i=0;i<len;i++) // return the extracted numbers
        cout << lucky[i] << "\t";
    cout << endl;

    return 0;
}

int * draw(int n)
{
    int i;
    int lucky[n];
    srand(time(0)); // seeds the RNG with the current time

    for(i=0;i<n;i++) // populate the lucky[] array
    {
        lucky[i] = (rand() % 50) + 1; // generates random integers between 1 and 50
    }
    return lucky;
}