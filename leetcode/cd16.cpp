#include<bits/stdc++.h>
using namespace std;
int main(){
    int P1,P2,P3,T1,T2,n,m;
    int ans=0;
    cin>>n>>P1>>P2>>P3>>T1>>T2;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        ans=ans+P1*(y-x);
    }
