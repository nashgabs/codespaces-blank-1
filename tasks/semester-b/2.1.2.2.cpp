#include <iostream>
#include <cstdlib>
#include <chrono>

using namespace std;

int *draw();                     // pre-define function to draw numbers into array of size 6
bool searchval(int x, int *arr); // pre-define function to search a 1 X 6 array for a single value
int main()
{
    int i; // declaration of counter
    int j; // declaration of counter

    int *ptr;    // declaration of pointer to hold address of the lucky draw
    int pick[6]; // declaration of array to hold chosen numbers
    int total_matches;
    int current_matches;
    int n = 1;
    bool match = false;

    cout << "Pick your six numbers from 1 to 50 seperated by a space" << endl;
    for (i = 0; i < 6; i++) // pick lotto numbers
    {
        cin >> pick[i];
    }
    ptr = draw();
    cout << "How many matching numbers required?" << endl;
    cin >> total_matches;

    while (current_matches != total_matches) // repeat until the lucky draw contains total_matches
    {
        n++;
        current_matches = 0;
        for (i = 0; i < 6; i++)
        {
            if (searchval(pick[i], ptr))
            {
                // cout << ptr[0] << "\t" << ptr[1] << "\t" << ptr[2] << "\t" << ptr[3] << "\t" << ptr[4] << "\t" << ptr[5] << endl;
                // cout << pick[i] << endl;
                current_matches++;
                // if (current_matches == total_matches)
                // {
                //     goto escape;
                // }
            }
        }
        ptr = draw();
    }
    // escape:
    cout << "Number of trials before " << total_matches << " number(s) had been matched:" << endl;
    cout << n << endl;
    cout << "\nLotto numbers:\t";
    for (i = 0; i < 6; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << "\n\nYour pick:\t";
    for (i = 0; i < 6; i++)
    {
        cout << pick[i] << "\t";
    }
    return 0;
}

int *draw()
{
    srand(time(NULL));      // seed the RNG with the current time
    static int arr[6];      // declaration of static array to store the lucky draw
    int i;                  // declaration of counter
    for (i = 0; i < 6; i++) // populate the array
        arr[i] = (rand() % 50) + 1;
    return arr; // return the array address
}

bool searchval(int x, int *arr)
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (x == arr[i])
        {
            return true;
        }
    }
    return false;
}