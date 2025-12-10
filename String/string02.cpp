// string print with space and next line 

#include <iostream>
using namespace std;
int main()
{
    string s;   
    // cin >> s;     // only print one word without space and tab

    getline(cin, s);
    cout << s << endl;
    cout << s << endl;
    cout << s.size() << endl;     //size print
    
    return 0;
}