#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> mewords;
    string meword;
    ifstream inputFile("enter.txt");
    ofstream outputFile("goout.txt");

    if (!inputFile.is_open() || !outputFile.is_open())
    {
        cout << "File opening error" << endl;
        return 0;
    }

    while (inputFile >> meword)
    {
        mewords.push_back(meword);
    }
    inputFile.close();

    for (auto i = mewords.rbegin(); i != mewords.rend(); ++i)
    {
        outputFile << *i << " ";
    }
    outputFile.close();
    return 0;
}