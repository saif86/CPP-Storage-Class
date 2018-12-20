/**
* @file Example2_Global_Variable.cpp
*
* @brief C++ Program to demonstrate Global Variables. 
* In this example, global variable can be accessed by all functions because
* it is defined at the top of the listing.
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

// Defining and Initializing Global variable
int gVar = 12;

// FUNCTION PROTOTYPE (DECLARATION)

/** function that tests global variables.
*
* @param void.
*
* @return void.
*/
void test();


// function main begins program execution
int main() {
	++gVar;
	cout << gVar << endl; //Output: 13 
	test();

	system("pause");
	return 0;
}
// end main 

// FUNCTION DEFINITION

// function that tests global variables.
void test() {
	++gVar;
	cout << gVar << endl; //Output: 14 
}
// end function test
