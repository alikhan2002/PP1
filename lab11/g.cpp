#include <iostream>
#include<map>
using namespace std;
int main(){
int n;
cin>>n;
string s;
int x;
map< pair<string,int> , int> mp;
map< pair<string,int> , int>::iterator it;
for(int i=0;i<n;i++){
    cin>>s>>x;
    if(mp.empty()){
        mp[make_pair(s,x)]=i;
    }
for(it=mp.begin();it!=mp.end();it++){
    if((*it).first.first==s){
        if((*it).first.second!=x){
        mp[make_pair(s,x)]=i;
        }
    }else{
           mp[make_pair(s,x)]=i;
    }


}
}
 map<string,int> m;
for(it=mp.begin();it!=mp.end();it++){
        m[(*it).first.first]++;
}
map<string,int>::iterator ip;
for(ip=m.begin();ip!=m.end();ip++){
        if((*ip).second>=3){
            cout<<(*ip).first<<" +1"<<endl;
        }else{
            cout<<(*ip).first<<" NO BONUS"<<endl;
        }
}
}
