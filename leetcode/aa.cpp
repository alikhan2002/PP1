#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
map<string,int> mp;
for(int i=0;i<n;i++){
    cin>>s;
    mp[s]++;
    if(mp[s]>1) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}


}