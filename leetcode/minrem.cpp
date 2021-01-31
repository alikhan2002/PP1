#include<iostream>
#include<map>
#include<vector>

using namespace std;
int main(){
map<int,int> mp;

vector<int> v;
int n;
cin>>n;
int x,cnt=0;
for(int i=1;i<=n;i++){
cin>>x;
mp[x]++;
}
map<int,int>::iterator it;
for(it=mp.begin();it!=mp.end();it++){
if((*it).first<(*it).second){
cnt+=(*it).second-(*it).first;
}else if((*it).first>(*it).second){
    cnt+=(*it).second;
}
}
cout<<cnt;


}
