#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
 int b, c;
 double num[10]; // declaration of the array for 10 numbers
 double a,v1;
 int size;
 size = 10; //number of elements to sort out
 // initialization of the array
 for (c = 0; c < size; c++)
// num[c] = rand() % 100; // give a number between 0 and 99
 num[c] = (rand() % 100)+1; // give a number between 1 and 100
 //displaying the array on the screen
 cout << " Original numbers are: " << endl;
 for (c = 0; c < size; c++)
 cout << num[c] << endl;
 cout << endl;
 return 0;
}