#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
vector<int> v;
stack<int> st;
int n,cnt=1,shariki=0;
int m;
cin>>m;
for(int i=0;i<m;i++){
cin>>n;
v.push_back(n);
}
for(int i=0;i<v.size();i++){
if(st.empty()){
    st.push(v[i]);
}else if(st.top()==v[i]){
    cnt++;
    st.pop();
    st.push(v[i]);
}
if(cnt>=3){
    shariki+=cnt;
}if(st.top()!=v[i] && !st.empty()) {
    st.push(v[i]);
    cnt=1;
    }
 }
 cout<<shariki;
}