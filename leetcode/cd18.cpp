#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char> v;
    vector<char> vv;
    map<char,int> mp;
    map<char,int>::iterator it;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        v.push_back(c);
        if(c!='?'){
        mp[c]++;
        }
    }
    if(n%4!=0){
        cout<<"===";
    }else{
        if(mp['A']>n/4 || mp['C']>n/4 || mp['G']>n/4 || mp['T']>n/4){
            cout<<"===";
        }else{
            for(it=mp.begin();it!=mp.end();it++){
                for(int i=0;i<n/4-it->second;i++){
                    vv.push_back(it->first);
                }
            }
            int j=0;
            for(int i=0;i<v.size();i++){
                if(v[i]=='?'){
                    v[i]=vv[j];
                    j++;
                }
              }
              for(int i=0;i<v.size();i++){
                  cout<<v[i];
              }
        }
    }
}




