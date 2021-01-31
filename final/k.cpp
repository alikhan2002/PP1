#include<iostream>
#include<map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v,vv;
    map<string,int> mp;
    map<string,string> m,mm;
    for(int i=0;i<n;i++){
    string s,s1;
    cin>>s>>s1;
    mp[s]++;
    v.push_back(s);
    vv.push_back(s1);
    m[s]=s1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(m[v[j]]==v[i] && m[v[i]]!=v[j]){
               mm.emplace(v[j],m[v[i]]);
               m.erase(v[i]);
               m.erase(v[j]);
            }else if(m[v[j]]==v[i] && m[v[i]]==v[j]){
               mm.emplace(v[i],m[v[j]]);
               m.erase(v[i]);
               m.erase(v[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[v[j]]==v[i] && m[v[i]]!=v[j]){
               mm.emplace(v[j],m[v[i]]);
               m.erase(v[i]);
               m.erase(v[j]);
            }else if(m[v[j]]==v[i] && m[v[i]]==v[j]){
               mm.emplace(v[i],m[v[j]]);
               m.erase(v[i]);
               m.erase(v[j]);
            }
        }
    }
    map<string,string>:: iterator it;
    cout<<mm.size()<<"\n";
    for(it=m.begin();it!=m.end();it++){
        mm.emplace(it->first,it->second);
        cout<<it->first<<" "<<it->second<<'\n';
    }
    map<string,string>:: iterator ip;
    // for(ip=mm.begin();ip!=mm.end();ip++){
    //     cout<<ip->first<<" "<<ip->second<<'\n';
    // }
}