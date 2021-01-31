#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        vector<int> v;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        int start,finish;
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                start=i;
                break;
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==1){
                finish=i;
                break;
            }
        }
        for(int i=start;i<=finish;i++){
            if(v[i]==0){
                ans++;
            }
        }cout<<ans<<'\n';
    }
}