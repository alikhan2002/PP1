#include <iostream>
#include <queue>
using namespace std;
int main(){
int n;
queue<int> q;
cin>>n;
string s;
for(int i=0;i<n;i++){
    cin>>s[i];
    q.push(s[i]);
    if(q.front()=='1'){
        q.pop();
    }
}
cout<<q.front()<<endl;



}