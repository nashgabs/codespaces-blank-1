#include <iostream>
#include <cmath>

long long RUN_MAX = pow(10,6); // 1 million.
int drawn[6]; // declaration of array to hold the lucky draw.
bool searchval(int x, int *arr); // pre-define function to search a 1 X 6 array for a single value.
void draw();

using namespace std;
int main()
{
    long long i; // declaration of counter.
    long long mtch; // integer to store number of matches.
    int j; // declaration of counter.
    int picked[6]; // declaration of array to hold chosen numbers
    short int lim; // integer to store number of matches required.
    short int n; // integer to store number of individually matched numbers.
    i = mtch = j = lim = n = 0; // intitialise all to zero.

    srand(time(NULL));
    std::cout << "Pick your six numbers from 1 to 50 seperated by a space" << endl;
    for (i = 0; i < 6; i++) // pick lotto numbers.
    {
        cin >> picked[i];
    }

    cout << "How many matching numbers required?" << endl;
    cin >> lim;


    for (i = 0; i < RUN_MAX; i++) // for 1 million.
    {
        n = 0;
        draw(); // draw the lottery.
        for (j = 0; j < 6; j++) // for each element in picked[].
        {
            if (searchval(picked[j], drawn)) // is the number a winner?
            {
                n++; // add a win.
            }
        }
        if (n >= lim) // does it meet the required number of matches?
        {
            mtch++;
        }                        
    }

    cout << "Number of times " << lim << " matches occured in " << RUN_MAX << " runs:" << endl;
    cout << mtch << endl;

    cout << "\n\nYour pick:\t";
    for (i = 0; i < 6; i++)
    {
        cout << picked[i] << "\t";
    }
    return 0;
}

void draw() // update array with new lotto draw
{
    int i = 0;
    for (i = 0; i < 6; i++) // draw lotto numbers into global list drawn[].
    {
        drawn[i] = (rand() % 50) + 1;
    }
}

bool searchval(int x, int* arr) // search for value in array.
{
    int i;
    for (i = 0; i < 6; i++) // for array elements.
    {
        if (x == arr[i]) // if value is in array return true, exit.
        {
            return true;
        }
    }
    return false; // else false, exit.
}