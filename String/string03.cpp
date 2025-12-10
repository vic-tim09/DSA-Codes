// join and add  string
// NOTE : char single quotation and string double quotation me hota hai hai to add dyan se kre .

#include <iostream>
using namespace std;
int main()
{
    string a = "Anki", t = "Tapasya";

    // string Love = a.append(t);    // join two string
    string Love = a + t;

    // string Love = a + "t";          // add a char at end
    cout << Love << endl;

    // push and pop
    string s = "Love";
    s.push_back('r');
    cout << s << endl;
    s.pop_back();
    cout << s;

    return 0;
}
