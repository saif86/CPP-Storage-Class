#include <iostream> 
using namespace std;

void test() {
	static int var = 0; // var is a static variable; 
	++var;
	cout << var << endl;
}
int main() {
	test();
	test();

	system("pause");
	return 0;
}