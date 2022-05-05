#include <iostream>
using std::cout;
using std::string;

int MultiplyByTwo(int i)
{
    i = 2 * i;
    return i;
}
int MultiplyByTwoRef(int &i)
{
    i = 2 * i;
    return i;
}
void DoubleString(string &str)
{
    // Concatentate the string with a space and itself.
    str = str + " " + str;
}

int main()
{

    /// passing by value:
    cout << "passing by value:"
         << "\n";
    int a = 5;
    cout << "The int a equals: " << a << "\n";
    int b = MultiplyByTwo(a);
    cout << "The int b equals: " << b << "\n";
    cout << "The int a still equals: " << a << "\n\n";

    /// passing by reference:
    cout << "passing by reference:"
         << "\n";
    cout << "The int a equals: " << a << "\n";
    b = MultiplyByTwoRef(a);
    cout << "The int b equals: " << b << "\n";
    cout << "The int a now equals: " << a << "\n\n";

    /// practice:
    string s = "Hello";
    cout << "The string s is: " << s << "\n";
    DoubleString(s);
    cout << "The string s is now: " << s << "\n";
}