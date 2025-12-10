#include <iostream>
using namespace std;
int main()
{
    string t = "tapasya";

    // reverse string
    int start = 0, end = t.size() - 1;

    while (start < end)
    {
        swap(t[start], t[end]);
        start++, end--;
    }
    cout << t << endl;

    // print size without t.size()
    int size = 0;
    while (t[size] != '\0')
    {
        size++;
    }
    cout << size << endl;

    // check the pallindrome

    string a = "naman";
    int first = 0, last = a.size() - 1;
    while (first < last)
    {
        if (a[first] != a[last])
        {
            cout << "Not a pallindrome" << endl;
            return 0;
        }
        else
            first++, last--;
    }
    cout << "This string is a pallindrome" << endl;
    return 0;
}