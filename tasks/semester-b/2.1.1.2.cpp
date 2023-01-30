#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
 int b, c;
 double num[10]; // declaration of the array for 10 numbers
 double a;
 int size;
 size = 10; //number of elements to sort out
 // initialization of the array
 for (c = 0; c < size; c++)
 num[c] = ((double) rand() / RAND_MAX)-0.5; // random function with range [-0.5,0.5]
 //displaying the array on the screen
 cout << " Original numbers are: " << endl;
 for (c = 0; c < size; c++)
 cout << num[c] << endl;
 cout << endl;
 return 0;
}