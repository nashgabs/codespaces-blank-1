#include <iostream>
#include <cmath>
#define MAX 10000000 // max runs
#define N 50         // max lotto number

// no duplicate numbers
// no numbers smaller than 1 or greater than 50
void draw(int luckyn[6]);

using namespace std;
int main()
{
    int _temp, i, j, k;
    long long ndraw[6];
    int usern[6], luckyn[6] = {0};
    bool inuse[N] = {false};

    draw(luckyn);

    cout << "Enter your six lucky numbers between 1 and 50!" << endl;
    for (i = 0; i < 6; i++)
    {
        cout << i + 1 << ":\t";
        cin >> _temp;
        while (_temp > 50 || _temp < 1 || inuse[_temp] == true)
        {
            cout << "Try again\n"
                 << i + 1 << ":\t";
            cin >> _temp;
        }
        inuse[_temp] = true;
        usern[i] = _temp;
    }

    // draw the lucky numbers and count how many matching numbers there are
    k = 0;
    _temp = 0;
    while (_temp < 6 && k < MAX)
    {
        draw(luckyn);
        _temp = 0;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {
                if (usern[i] == luckyn[j])
                {
                    _temp++;
                }
            }
        }
        if (_temp != 0 && ndraw[_temp] != 0)
        {
            for (i = 0; i < _temp - 1; i++)
            {
                if (ndraw[i] == 0)
                {
                    ndraw[i] = _temp;
                }
            }
        }
        k++;
    }

    for (i = 0; i < 6; i++)
    {
        cout << i + 1 << " lucky matches took " << ndraw[i] << " lotto draws." << endl;
    }

    return 0;
}

void draw(int luckyn[6])
{
    int pile[N + 1], i, x, _temp;
    for (i = 1; i < N + 1; i++) // fill the pile with numbers 1 to 50 where pile[1]=1 and pile[50]=50.
    {
        pile[i] = i;
    }
    for (i = 1; i < N + 1; i++) // shuffle the numbers randomly
    {
        x = (rand() % 50) + 1; // random number 1 to 50
        _temp = pile[i];       // preserve the number at current location
        pile[i] = pile[x];     // i --> x
        pile[x] = _temp;       // x --> i
    }
    for (i = 1; i < 7; i++) // map pile[1...6] onto lucky number list
    {
        luckyn[i] = pile[i];
    }
}