/*
02. Using a Header
One other way to solve the code problem (without rearranging the functions) would have been to declare each function at the top of the file.
A function declaration is much like the first line of a function definition - it contains the return type, function name, and input variable types.
The details of the function definition are not needed for the declaration though.

To avoid a single file from becomming cluttered with declarations and definitions for every function,
it is customary to declare the functions in another file, called the header file.

In C++, the header file will have filetype .h, and the contents of the header file must be included at the top of the .cpp file.
*/

// The contents of header_example.h are included in the corresponding .cpp file using quotes:
#include "header_example.h"

#include <iostream>
using std::cout;

void OuterFunction(int i)
{
    InnerFunction(i);
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

/*
. Notice that the code was fixed without having to rearrange the functions!
. In the code above, you might also have noticed several other things:
    - The function declarations in the header file don't need variable names, just variable types.
        You can put names in the declaration, however, and doing this often makes the code easier to read.
    - The `#include` statement for the header used quotes " " around the file name, and not angle brackets `<>`.
        We have stored the header in the same directory as the .cpp file, and the quotes tell the preprocessor to look for the file in the same directory as the current file - not in the usual set of directories where libraries are typically stored.
*/
