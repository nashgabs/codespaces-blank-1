// INSERTION SORT METHOD
#include <iostream>

using namespace std;
#define MAX 100
int main()
{
    int n, list[MAX], i, j, temp;
    do
    {
        cout << "How many elements are in the list? (MAX 100) ";
        cin >> n;
    } while (n > MAX); // only take values smaller than or equal to 100
    /*
    Input n elements (max number is given by MAX value
    */
    for (i = 0; i < n; i++) // for each element specified by user
    {
        cout << "List[" << i << "]: ";
        cin >> list[i]; // user inputs value for each element
    }
    cout << "Sorting the array...\n";
    for (i = 1; i < n; i++) // for each element
    {
        temp = list[i]; // store current value in a cache
        j = i - 1;      // j is the position of the previous element
        while ((list[j] > temp) && (j >= 0))
        /*
        while the previous element is bigger than the current element
        */
        {
            list[j + 1] = list[j]; // swap
            j--;
        }
        list[j + 1] = temp;
    }

    cout << "Array after sorting: \n";
    for (i = 0; i < n; i++)
    {
        cout << list[i] << endl;
    }
    return 0;
}