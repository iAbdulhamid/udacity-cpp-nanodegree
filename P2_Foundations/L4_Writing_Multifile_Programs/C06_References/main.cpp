/*
You have seen references used previously, in both
    - pass-by-reference for functions, and in a
    - range-based for loop example that used references to modify a vector.
As you write larger C++ programs, you will find references useful in a variety of situations.

As mentioned previously, a reference is another name given to an existing variable.
On the left hand side of any variable declaration, the & operator can be used to declare a reference.
*/

#include <iostream>
using std::cout;

int main()
{
    int i = 1;

    // Declare a reference to i.
    int &j = i;
    cout << "The value of j is: " << j << "\n";

    // Change the value of i.
    i = 5;
    cout << "The value of i is changed to: " << i << "\n";
    cout << "The value of j is now: " << j << "\n";

    // Change the value of the reference.
    // Since reference is just another name for the variable,
    // th
    j = 7;
    cout << "The value of j is now: " << j << "\n";
    cout << "The value of i is changed to: " << i << "\n";
}