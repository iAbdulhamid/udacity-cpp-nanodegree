#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::string;

// TODO: Add the ReadBoardFile function here.
void ReadBoardFile(string path)
{
    // std::ifstream myFile;
    // myFile.open(path);
    std::ifstream myFile(path);
    if (myFile)
    {
        cout << "The file stream has been created!"
             << "\n";

        string line;
        while (getline(myFile, line))
            cout << line << "\n";
    }
}

int main()
{
    // TODO: Call the ReadBoardFile function here.
    ReadBoardFile("1.board");
}