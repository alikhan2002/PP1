#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
int fbinar(vector<int> v){
int sum=0;
for(int i=0;i<v.size();i++){
    sum=sum+pow(2,i)*v[v.size()-1-i];
}
return sum;
}
int main(){
int n,m;
cin>>n>>m;
int a[n][m];
vector<int> v;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
vector<int> v1;
   for(int j=0;j<m;j++){
       v1.push_back(a[i][j]);
   }int l1=fbinar(v1);
   v.push_back(l1);
}
map<int,int> mp;
for(int i=0;i<v.size();i++){
    mp[v[i]]++;
}
int x=pow(2,m)-1;
int ans=0;
for(int i=0;i<v.size();i++){
    ans=max(ans,mp[v[i]]+mp[x^v[i]]);
}
cout<<ans;



}