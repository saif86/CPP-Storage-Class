/**
* @file Example3_Static Local_Variable.cpp
*
* @brief C++ Program to demonstrate Static Local Variables. 
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

// FUNCTION DEFINITION

/** function that tests static local variables.
*
* @param void.
*
* @return void.
*/
void test() {
	static int var = 0; // var is a static variable; 
	++var;
	cout << var << endl;
}


// function main begins program execution
int main() {
	test();
	test();

	system("pause");
	return 0;
}
// end main 
