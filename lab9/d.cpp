#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<int> s;
int n;
cin>>n;
int k;
cin>> k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    s.push(a[i]);
}int cnt=0;
while(!s.empty()){
    if(s.top()==k){
        cnt++;
    }
    s.pop();
}
// cout<<endl;

// for(int i=0;i<n;i++){
//     if(s.top()==k){
//         cnt++;
//     }else{
//         s.pop();
//     }
// }
cout<<cnt;
}
