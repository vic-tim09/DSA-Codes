// copy one vector to another

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // first vector
    vector<int> v1;

    v1.push_back(0);
    v1.push_back(9);
    v1.push_back(8);
    v1.push_back(55);
    v1.push_back(44);

     cout << "size of vector 1: " << v1.size() << endl;
    cout << "capacity of vector 1: " << v1.capacity() << endl;


    // print all element of first vector
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    // second vector
    vector<int> v2;

    // copy element into second vector
    v2 = v1;

    cout << "size of vector 2: " << v2.size() << endl;
    cout << "capacity of vector 2: " << v2.capacity() << endl;

    // print all element of second vector
    for (auto i : v2)
    {
        cout << i << " ";
    }
}