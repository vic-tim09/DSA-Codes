// short and search

#include <iostream>
#include <algorithm> // for sort,greater ,binary_search , reverse
#include <vector>
using namespace std;
int main()
{
    // first vector
    vector<int> v;

    v.push_back(0);
    v.push_back(9);
    v.push_back(8);
    v.push_back(55);
    v.push_back(44);

    cout << "size of vector 1: " << v.size() << endl;
    cout << "capacity of vector 1: " << v.capacity() << endl;

    // sortin of vector in incresing order
    sort(v.begin(), v.end());

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // searching an element in binary search
    cout << binary_search(v.begin(), v.end(), 9) << endl; // 1 means present hai 0 means nhi hai

    // sortin of vector in decresing order
    sort(v.begin(), v.end(), greater<int>());

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // another style
    sort(v.rbegin(), v.rend());

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}