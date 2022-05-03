#include <iostream>
using std::cout;

int main()
{
    /*
        Write a while loop to iterate over the integers from 1 to 10.
        If the integer is even, print it out.

        Hint: you can tell if an integer is even by looking at its remainder after dividing by two.
        In C++, the remainder operator is `%`.
        In other words, for a given `int i`, you have `remainder = i % 2`.
        If `remainder` equals 0, the number is even.
    */
    // Write your code here.
    int i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
            cout << i << "\n";
        i++;
    }
}