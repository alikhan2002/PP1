#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
map<char,int> mp;
map<char,int> M;
map<char,int> flags;
set<char> st;
int res=0,ans=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
M[s[i]]++;
}
for(int i=0;i<s.size();i++){
mp[s[i]]++;
if(M[s[i]]-mp[s[i]]>0){
    if(flags[s[i]]==0){
        ans++;
        flags[s[i]]=1;
        res=max(res,ans);
    }
}else if(flags[s[i]]==1){
    ans--;
    flags[s[i]]=0;
}
}
cout<<res;
}