// creat vecrtor with element
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // creat a vector / declare which present with element
    vector<int> v;
    // v[1] = 2;

    v.push_back(0);
    v.push_back(9);
    v.push_back(8);

    // print all element from another style
    for (auto i = v.begin(); i != v.end(); i++)    //auto means automatically data type le lega
    {
        cout << *i << " ";  //star * bolega value print kro 
    }

    cout << endl;

    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;

    // print all element in legendry style
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}
