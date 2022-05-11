/*
Header files, or .h files, allow related function, method, and class declarations to be collected in one place.
The corresponding definitions can then be placed in .cpp files.
The compiler considers a header declaration a "promise" that the definition will be found later in the code,
so if the compiler reaches a function that hasn't been defined yet, it can continue on compiling until the definition is found.
This allows functions to be defined (and declared) in arbitrary order.
*/

// 01.Function Order in a Single File
// In the following code example, the functions are out of order, and the code will not compile.
#include <iostream>
using std::cout;

/*
void OuterFunction(int i)
{
    InnerFunction(i); // "InnerFunction" was not declared in this scope!
}
void InnerFunction(int i)
{
    cout << "The value of the integer is: " << i << "\n";
}

int main()
{
    int a = 5;
    OuterFunction(a);
}
*/

// Try to fix this by rearranging the functions to be in the correct order.
void InnerFunction(int i)
{
    cout << "The value of the integer is: " << i << "\n";
}

void OuterFunction(int i)
{
    InnerFunction(i); // now i can see InnerFunction :)
}

int main()
{
    int a = 5;
    OuterFunction(a);
}