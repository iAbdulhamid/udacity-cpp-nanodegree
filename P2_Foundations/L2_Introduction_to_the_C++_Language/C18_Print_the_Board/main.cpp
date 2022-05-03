#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.
void PrintBoard(const vector<vector<int>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
            cout << board[i][j] << " ";
        cout << "\n";
    }
}

// using range-based for loop:
void PrintBoardRB(const vector<vector<int>> board)
{
    for (auto v : board)
    {
        for (int i : v)
            cout << i << " ";
        cout << "\n";
    }
}

int main()
{
    vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 0, 0, 0, 1, 0}};
    // TODO: Call PrintBoard function here.
    PrintBoard(board);
    cout << "using range-based for loop:"
         << "\n";
    PrintBoardRB(board);
}