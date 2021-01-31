#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m,mini=100000;;
        cin>>m;
        map<int,int> mp;
        vector<int> v,v1;
        while(m--){
            int x;
            cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        for(int i=0;i<v.size();i++){
            if(mp[v[i]]==1 && v[i]<mini){
                mini=v[i];
            }
        }
        bool res=false;
        int ind=0;
        for(int i=0;i<v.size();i++){
            if(mp[v[i]]==1 && v[i]==mini){
                res=true;
                ind=i+1;
            }
        }if(res){
            cout<<ind<<'\n';
        }
        else{
            cout<<"ZA WARUDO"<<'\n';
        }
    }
}