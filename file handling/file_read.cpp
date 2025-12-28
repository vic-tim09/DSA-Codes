// how to read file 
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;     //file read ifstream, class
    // file ko open kro
    read.open("love.pdf");
    // file read kro
    char c;
    c = read.get();

    while (!read.eof())
    {
        cout << c;
        c = read.get();
    }
    read.close();
}