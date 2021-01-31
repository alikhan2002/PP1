#include<iostream>
#include<set>
using namespace std;
int main(){
int n;
set<int> s;
set<int> m;
int x;
while(cin>>n){
    s.insert(n);
}
while(cin>>x){
   m.insert(x);
}
// for(int i=0;i<s.size();i++){
//     if(s.find(n)!=m.end()){
//         cout<<n<<" ";
//     }
// }
}