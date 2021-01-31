#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<char,int> mp;
        map<char,int>:: iterator it;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        if(mp[s[0]]==s.size()){
            cout<<"-1";
        }else
        {
             for(it=mp.begin();it!=mp.end();it++){
                 while((*it).second--){
                     cout<<(*it).first;
                 }
             }
        }cout<<'\n';
    }
}