# CPP-Storage-Class
Explains C++ Storage calss

Every variable in C++ has a type which specifies the type of data that can be stored in a variable. For example: int, float, char etc. Also variables and objects in C++ have another feature called storage class. Storage class specifiers control two different properties: storage duration (determines how long a variable can exist) and scope (determines which part of the program can access it). The variables can be divided into 4 ways depending upon the storage duration and scope of variables.

  * Local variable
  * Global variable
  * Static local variable
  * Register Variable
  * Thread Local Storage
  
## Local Variable
A variable defined inside a function (defined inside function body between braces) is a local variable. Local variables are created when the function containing local variable is called and destroyed when that function returns. Local variables can only be accessed from inside a function in which it exists. Consider this example:
### Example 1: Local Variable
```
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
  cout<<var; // illegal: var not visible inside test() 
}
```
The variable var cannot be used inside test() and var1 cannot be used inside main() function.
Keyword auto could also be used for defining local variables (it was optional but not necessary) before as: auto int var; but, after C++11 auto has different meaning and should not be used for defining local variables as variables defined inside a function is a local variable by default.
## Global Variable
If a variable is defined outside any function, then that variable is called a global variable. Any part of program after global variable declaration can access global variable. If a global variable is defined at the beginning of the listing, global variable is visible to all functions. Consider this example:
### Example 2: Global Variable
```
/* In this example, global variable can be accessed by all functions because 
  it is defined at the top of the listing.*/ 
  
  #include <iostream> 
  using namespace std; 
  int c = 12; 
  
  void test(); 
  
  int main() { 
    ++c; 
    cout<<c<<endl; //Output: 13 
    test(); 
    system("pause"); 
    return 0;
 }
 
 void test() { 
  ++c; 
  cout<<c<<endl; //Output: 14 
}
```
### Output
```
13

14
```
In the above program, *c* is a global variable. This variable is visible to both functions in the above program.
The memory for global variable is set when program starts and exist until program ends.

## Static Local variable
Keyword static is used for specifying static variable. For example:
```
... .. ...
int main() {
static float a;
... .. ...
}
```
A static local variable exist only inside a function in which it is declared(similar to local variable) but the lifetime of static variable starts when the function containing static variable is called and ends when the program ends. The main difference between local variable and static variable is that, the value of static variable persist until the program ends. Consider this example:
### Example 3: Static Local Variable
```
#include <iostream> 
using namespace std; 

void test() { 
  static int var = 0; // var is a static variable; 
  ++var; 
  cout<<var<<endl; 
} 
int main() { 
  test(); 
  test(); 
  
  system("pause"); 
  return 0; 
}
```
### Output
```
1

2
```
In the above program, test( ) function is invoked 3 times. During first call, variable *var* is declared as static variable and initialized to 0. Then 1 is added to *var* which is displayed in the screen. When the function test( ) returns, variable *var* still exist because it is a static variable. During second function call, no new variable *var* is created. Only *var* is increased by 1 and then displayed to the screen.
### Output of above program if var was not specified as static variable 1 1
```
1

1
```
## Register Variable
Keyword register is used for specifying register variables. Register variables are similar to automatic variable and exists inside that particular function only. If a program encounters register variable, it stores that variable in processor's register rather than memory if available. Processor's register is much more faster than memory. This keyword was deprecated in C++11 and should not be used.
## Thread Local Storage
Thread-local storage is a mechanism by which variables are allocated such that there is one instance of the variable per extant thread. Keyword thread_local is used for this purpose. Learn more about thread local storage.
