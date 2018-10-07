/* In this example, global variable can be accessed by all functions because
it is defined at the top of the listing.*/

#include <iostream> 
using namespace std;

// Defining and Initializing Global variable
int c = 12;

void test();

int main() {
	++c;
	cout << c << endl; //Output: 13 
	test();

	system("pause");
	return 0;
}

void test() {
	++c;
	cout << c << endl; //Output: 14 
}