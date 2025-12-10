#include <iostream>
#include <stack>          //// standard library
using namespace std;
int main(){

    stack<int> s;         
    s.push(8);
    s.push(88);
    // s.push(58);
    s.pop();
    s.pop();
    cout<<s.top()<<endl ;
    cout<<s.size()<<endl ;
    cout<<s.empty()<<endl ;
}