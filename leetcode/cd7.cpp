#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    map<string,vector<int> > mp;
    map<string,vector<int> >:: iterator it;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        mp[s].push_back(i);
    }
    vector<char> ch;
    int j=0;
    for(char c='a';c<='z';c++){
        ch.push_back(c);
    }
    if(mp.size()>26){
        cout<<-1;
        
    }else{
        for(int i=0;i<v.size();i++){
            if(v[i].size()>1){
                vector<int> vind;
                vind=mp[v[i]];
                for(int k=0;k<vind.size();k++){
                v[vind[k]]=ch[j];
                }
                j++;
            }
        } 
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
    } 

}




