// how to create and open file with program
#include <iostream>
#include <fstream>   //main class of ifstream and ofstream classes
using namespace std;
int main()
{
    // file ko open karna
    ofstream khol;      //file open ofstream class
    khol.open("love.pdf"); // if present hoga ye file to open krega else create kr dega
    // write krna ho
    khol << "I LOVE INDIA";

    khol.close(); // resourses release kr du taki workers apne ghar jaye
}