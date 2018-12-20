/**
* @file Example1_Local Variable.cpp
*
* @brief C++ Program to demonstrate Local Variables
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

// FUNCTION PROTOTYPE (DECLARATION)

/** function that tests local variables.
*
* @param void.
*
* @return void.
*/
void test();


// function main begins program execution
int main() {
	int var = 5; // local variable to main() 
	test();
	var1 = 9; // illegal: var1 not visible inside main() 

	system("pause");
	return 0;
}
// end main 

// FUNCTION DEFINITION

// function that tests local variables.
void test() {
	int var1; // local variable to test() 
	var1 = 6;
	cout << var; // illegal: var not visible inside test() 
}
// end function test
