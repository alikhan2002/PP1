#include <iostream>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    stack<int> st;
    queue<int> q;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            st.push(a[i]);
        }
        if(a[i]%2==1){
            q.push(a[i]);
        }
}
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}