#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<int,int> mp;
    map<int,int>:: iterator it;
    for(int i=0;i<s.size();i++){
        mp[s[i]-'0']++;
    } 
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<": "<<it->second<<'\n';
    }
}