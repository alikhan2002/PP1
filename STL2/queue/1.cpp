#include <iostream>
#include <queue>
using namespace std;
int main(){
queue<int> q;
q.push(10);
q.push(5);
q.push(-1);
q.push(6);
while(!q.empty()){
cout<<q.front()<<" ";
q.pop();

}


}