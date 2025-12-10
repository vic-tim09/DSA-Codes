// vector with same element
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // creat a vector / declare which size and capacity same with same element
    vector<int> v(5, 1);

    // v.push_back(0);
    // v.push_back(9);
    // v.push_back(8);

    // print all element
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\nsize of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;

    // replace a element with this
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // print last element
    cout << "\nlast element of vector : " << v[v.size() - 1];
}
