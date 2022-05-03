#include <iostream>
#include <vector>
#include <numeric>
using std::cout;
using std::string;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int>
// as the argument, and it should return the sum of all the ints in the vector.

// first approach:
// int AdditionFunction(vector<int> v)
// {
//     int sum = 0;
//     for (int i : v)
//         sum += i;
//     return sum;
// }

// second approach:
// &V: accepting the vetor v by refernce instead of copying it, which is FASTER...
// const: to enforce not chaning the vector values in this case, Addition.
int AdditionFunction(const vector<int> &v)
{
    int sum = 0;
    for (const int &i : v)
        sum += i;
    return sum;
}

// third approach:
// int AdditionFunction(const vector<int> &v)
// {
//     int sum = 0;
//     for (auto i = v.begin(); i != v.end(); ++i)
//         sum += *i;
//     return sum;
// }

// Void Return Type:
void PrintStrings(string str1, string str2)
{
    cout << str1 << " " << str2 << "\n";
}

int main()
{
    vector<int> v{1, 2, 3};

    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";

    // fourth approach:
    cout << std::accumulate(v.begin(), v.end(), 0) << "\n";

    // Void Return Type:
    string s1 = "C++ is ";
    string s2 = "super awesome.";
    PrintStrings(s1, s2);
}