#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
string s;
cin>>s;
map<char,int> mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
map<char,int>:: iterator it;
bool res=true;
int t=mp[s[0]];
for(it=mp.begin();it!=mp.end();it++){
    if(t!=(*it).second){
        res=false;
        break;
    }
}
if(res==0){
    cout<<"NO";
} else cout<<"YES";

return 0;
}