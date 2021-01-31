#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
map<int,int> mp;
vector<int> v;
int n;
cin>>n;
int x,mini=10000,minis=10000;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    mp[x]++;
}
for(int i=0;i<n;i++){
    if(v[i]<mini){
        mini=v[i];
    }
}
for(int i=0;i<n;i++){
    if(v[i]<minis && v[i]!=mini){
        minis=v[i];
    }
}
cout<<mp[minis];
}