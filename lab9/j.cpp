#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cin>>n;
map<string,int> mp;
map<string,int>::iterator it;
for(int i=0;i<n;i++){
    string s;
    int m;
    cin>>s>>m;
    mp[s]+=m;
}
for(it=mp.begin();it!=mp.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
}