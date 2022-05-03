#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main()
{
    // 1D Vector Access
    vector<int> a = {0, 1, 2, 3, 4};
    // Add some code here to access and print elements of a.
    for (int i : a)
        cout << i << " ";
    cout << "\n\n";

    // 2D Vector Access
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};

    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < b[0].size(); j++)
            cout << b[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";

    // using Range-based for loop:
    for (vector<int> v : b)
    {
        for (int i : v)
            cout << i << " ";
        cout << "\n";
    }
}