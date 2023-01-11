#include <iostream>
using namespace std;
int main()
{
    signed short int smallNumber;
    smallNumber = -65535;
    cout << "small number:" << smallNumber << endl;
    smallNumber++;
    cout << "small number:" << smallNumber << endl;
    smallNumber++;
    cout << "small number:" << smallNumber << endl;
    return 0;
}