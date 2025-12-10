// STL of deque 

#include <iostream>
#include <deque>
using namespace std;
int main (){
    deque<int> d;
    d.push_front(90);
    d.push_front(6);
    d.pop_back();
    d.push_back(89);
    d.push_back(100);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

}