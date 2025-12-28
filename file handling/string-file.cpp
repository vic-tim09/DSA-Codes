#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("tapsu.txt");
    fout << "Hello Tapsu !\n";
    fout << "Hi Ankit !\n";
    fout << "How are you?\n";
    fout << "I am fine and you?\n";
    fout.close();

    ifstream find;  //find is object of class fstream
    find.open("tapsu.txt");

    string line;

    while (getline(find, line)) {
        cout << line << endl;
    }
    find.close();
}