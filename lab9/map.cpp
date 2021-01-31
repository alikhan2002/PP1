#include <iostream>
#include <map>
#include<vector>
using namespace std;
int main(){
map<int,int> mp;
map<int,int>::iterator it;
int n,x,od=-1;
int numodd=0;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
    cin>>x;
    mp[x]++;
}
for(it=mp.begin();it!=mp.end();it++){
 if((*it).second%2==1){
     numodd++;
     od=it->first;
 }
}
if(numodd>1){
 cout<<"Impossible";
} else{
 for(it=mp.begin();it!=mp.end();it++){
     for(int i=0;i<(*it).second/2;i++){
         cout<<(*it).first<<" ";
         v.push_back((*it).first);
     }
 }
 if (od>0) cout<<od<<" ";
 for(int i=v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
}
}  



}