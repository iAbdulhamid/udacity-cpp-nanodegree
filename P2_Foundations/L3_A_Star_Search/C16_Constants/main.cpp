/*
In A Tour of C++, Bjarne Stroustrup writes:
C++ supports two notions of immutability:
1. const: meaning roughly " I promise not to change this value."...The compiler enforces the promise made by const....
2. constexpr: meaning roughly "to be evaluated at compile time." This is used primarily to specify constants...
*/

#include <iostream>
#include <vector>

int sum(const std::vector<int> &v)
{
    int sum = 0;
    for (int i : v)
        sum += i;
    // v.push_back(5);  // Error!
    return sum;
}

int main()
{
    int i;
    std::cout << "Enter an integer value for i: ";
    std::cin >> i;
    const int j = i * 2; // "j can only be evaluated at run time."
                         // "But I promise not to change it after it is initialized."
                         // This example shows how to use const to promise not to modify a variable, even though the variable can only be evaluated at run time.

    constexpr int k = 3; // "k, in contrast, can be evaluated at compile time."
                         // This example shows how to use constexpr to guarantee that a variable can be evaluated at compile time.

    std::cout << "j = " << j << "\n";
    std::cout << "k = " << k << "\n";

    // The compiler will catch a const variable that changes:
    const int y = 2; // "I promise not to change this."
    // y++;             // "I just broke my promise."

    // Similarly, the compiler will catch a constexpr variable that changes.
    constexpr int z = 2; // "i can be evaluated at compile time."
    // z++;                 // "But changing a constexpr variable triggers an error."

    // The major difference between const and constexpr, though, is that constexpr must be evaluated at compile time.
    // The compiler will catch a constexpr variable that cannot be evaluated at compile time.
    int x;
    std::cout << "Enter an integer value for x: ";
    std::cin >> x;
    // constexpr int j = x * 2; // "j can only be evaluated at run time."
    // "constexpr must be evaluated at compile time."
    // "So this code will produce a compilation error."

    // A common usage of const is to guard against accidentally changing a variable, especially when it is passed-by-reference as a function argument.
    std::vector<int> v{0, 1, 2, 3, 4};
    std::cout << sum(v) << "\n";

    // The distinction between `const` and `constexpr` is subtle.
    // In general, though, `const` is much more common than `constexpr`.
    // When in doubt, use `const`, especially to guard against accidentally modifying a variable.
}