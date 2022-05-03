#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main()
{
    // Challenge:
    // try to write a double range-based for loop that prints all of the entries of the 2D vector b.
    // Add your code here.
    vector<vector<int>> b{{1, 2},
                          {3, 4},
                          {5, 6}};

    // Write your double loop here.
    for (auto v : b)
    {
        for (int i : v)
            cout << i << " ";
        cout << "\n";
    }
}