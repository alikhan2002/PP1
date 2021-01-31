#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<string> v,vv;
    map<string,vector<string> > mp;
    map<string,int> mm;
    while(n--){
        string s;
        cin>>s;
        mm[s]++;
    }
    cin>>m;
    while(m--){
        string s,s1;
        cin>>s>>s1;
        mp[s].push_back(s1);
        mp[s1].push_back(s);
    }
    string ss;
    cin>>ss;
    vv=mp[ss];
    sort(vv.begin(),vv.end());
    bool res=false;
    for(int i=0;i<vv.size();i++){
        if(mm[vv[i]]>0){
        res=true;
        }
    }
    if(!res){
        cout<<0;
        return 0;
    }
    cout<<vv.size()<<'\n';
    for(int i=0;i<vv.size();i++){
        cout<<vv[i]<<" ";
    }
}