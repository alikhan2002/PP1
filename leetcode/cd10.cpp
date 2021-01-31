#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnto=0,cnte=0;
        vector<int> v;
        cin>>n;
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            v.push_back((int)x-'0');
        }
        bool res=false;
        if(n%2==0){
            for(int i=0;i<n;i++){
                if(v[i]%2==0 && i%2==1){
                cout<<2<<'\n';
                res=true;
                break;
                }
            }
            if(res==false){
                cout<<1<<'\n';
            }
        }
         res=false;
        if(n%2==1){
            for(int i=0;i<n;i++){
                if(v[i]%2==1 && i%2==0){
                cout<<1<<'\n';
                res=true;
                break;
                }
            }
            if(res==0){
                cout<<2<<'\n';
            }
        }
    }
}