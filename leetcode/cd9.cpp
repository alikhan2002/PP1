#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        int i=0,j=v.size()-1;
        while(i<=j){
            if(i+j==v.size()-1){
                cout<<v[i]<<" ";
                i++;
            }else{
                cout<<v[j]<<" ";
                j--;
            }
        }cout<<'\n';
    }
}