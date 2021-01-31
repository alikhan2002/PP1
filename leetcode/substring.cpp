#include<iostream>
#include<map>
using namespace std;
int main(){
int n,k,len=0,x;
map<int,int> mp;
cin>>n;
cin>>k;
int a[n];
for(int i=1;i<=n;i++){
    cin>>x;
if(i==1){
    mp[i]=x;
}else{
    mp[i]=mp[i-1]^x;
}
}
int maxi=-111;
for(int i=1;i<n;i++){
    for(int j=i+1;j<=n;j++){
        if(mp[i]^mp[j]==k){
            len=j-i-1;
            if(len>maxi){
                maxi=len;
            }
        }
    }
}
cout<<maxi;
}