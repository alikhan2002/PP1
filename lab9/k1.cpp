#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
vector<int> v,v1;
stack<int> st;
int w=1;
int n,x,maxi=-1111;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
v1.push_back(x);
}
for(int i=0;i<v.size();i++){
    if(st.empty()){
        st.push(v[i]);
    }if(!st.empty()){
        if(st.top()<=v[i]){
            v1.push_back(w*v[i]);
            w++;
        }else if(st.top()>v[i]){
            st.pop();
            st.push(v[i]);
            w=1;
        }
    }
}
for(int i=0;i<v1.size();i++){
    if(v1[i]>maxi) maxi=v1[i];
}

cout<<maxi;


}