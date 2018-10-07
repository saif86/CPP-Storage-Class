#include <iostream> 
using namespace std;

void test();

int main() {
	int var = 5; // local variable to main() 
	test();
	var1 = 9; // illegal: var1 not visible inside main() 

	system("pause");
	return 0;
}

void test() {
	int var1; // local variable to test() 
	var1 = 6;
	cout << var; // illegal: var not visible inside test() 
}