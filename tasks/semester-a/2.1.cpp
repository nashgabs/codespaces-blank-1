/* NAME: 2.1.cpp
* DESCRIPTION: Declaration and use of int variables
* AUTHOR: Samuel Holliday
* DATE: 17/10/2022
*/
#include <iostream>
using namespace std;
int main()
{
	/*
	* Declare integer variables containing the average number of
	* candies per child and the expected number of children.
	* Note that the variables are already initialized with values.
	*/
	int CandiesPerChild = 5; // Average number of candies per child
	int NChildren = 10;		 // Expected number of children
	int ECandies = 10;
	/*
	* Declare an unsigned short variable for the total
	* Number of candies
	*/
	unsigned short int TotalCandies;
	/* Unsigned integers cannot be negative but they have the same capacity as a signed integer*/

	/* Calculate the expected total number of candies plus a surplus */
	TotalCandies = CandiesPerChild * NChildren + ECandies;
	cout << "HALLOWEEN CALCULATOR (v1.0)" << endl;
	cout << "Average candies per child : " << CandiesPerChild << endl;
	cout << "Expected number of children : " << NChildren << endl;
	cout << "Extra Candies : " << ECandies << endl;
	cout << "Total number of candies : " << TotalCandies << endl;
	return 0;
}