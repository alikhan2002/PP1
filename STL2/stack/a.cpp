#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
 s.push(10);
s.push(5);
s.push(-1);
s.push(6);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
}