#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;
#define MAXN 50
void mix_and_extract(int);
void mix_and_extract(int lnums[7])
{
    int i, j, k, nums[MAXN];
    // fill nums[] with numbers from 1 to 50
    for (i = 1; i < MAXN; i++)
        nums[i] = i;
    for (i = 1; i < MAXN; i++)
    {
        j = ((int)rand() % MAXN - 1) + 1;
        k = nums[i];
        nums[i] = nums[j];
        nums[j] = k; // randomly mix nums[]
    }
    // extract the first 6 numbers from nums[]
    for (i = 1; i < 7; i++)
        lnums[i] = nums[i];
}
int main()
{
    int m, i, j, k, val, chv[MAXN] = {}, lnums[7], ynums[7];
    int nextr = 0, Counter[7] = {};
    srand((int)time(0));
    cout << "******** SCIENTIFIC COMPUTING LOTTERY *********\n";
    cout << "******** TRY YOUR LUCK *********\n";
    cout << "******** BY GIVING 6 NUMBERS *********\n";
    for (i = 1; i < 7; i++)
    {
        do
        {
            cout << "N. " << i << "? ";
            cin >> val;
            if (val < 1 || val > 50)
                cout << "Only numbers between 1-50, please!\n";
            if (chv[val] == 1)
                cout << "This number was already selected!\n";
        } while ((val < 1 || val > MAXN) || chv[val] != 0);
        ynums[i] = val;
        chv[val] = 1;
    }
    cout << "THANK YOU! \n";
    cout << "SHALL NOW TURN THE WHEEL OF FURTUNE ... \n";
    do
    {
        mix_and_extract(lnums);
        m = 0;
        for (i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (ynums[j] == lnums[i])
                {
                    m++;
                }
            }
        }
        if (m != 0)
        {
            if (Counter[m] == 0)
            {
                for (k = 1; k <= m; k++)
                {
                    if (Counter[k] == 0)
                        Counter[k] = nextr;
                }
            }
        }
        nextr++;
    } while (m < 6);
    cout << setprecision(9) << fixed;
    cout << "\nN. winning numbers | Number of draws | Probability | Weeks "
         << endl;
    cout << "-------------------|-----------------|-------------|-------"
         << endl;
    for (i = 1; i < 7; i++)
    {
        cout << i << "\t\t   | " << setw(16) << Counter[i] << "| "
             << (1.0 / Counter[i]) << " | " << Counter[i] / 2 << endl;
    }
    return 0;
}