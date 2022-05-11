/*
In the previous concept, you saw how header files could be useful for separating definitions from declarations,
so that you don't need to be too careful about the order in which functions are defined.
Using header files is typically the first step in creating a multi-file program.

In this concept, you will learn about using multiple .cpp and .h files in a program -
how to compile all the files together, and
how to ensure the code from one file can be used in another.
*/

#include <iostream>
#include <vector>
#include "increment_and_sum.h"
using std::cout;
using std::vector;

int main()
{
    vector<int> v{1, 2, 3, 4};
    int total = IncrementAndComputeVectorSum(v);
    cout << "The total is: " << total << "\n";
}