#include <iostream>
#include <map>
using namespace std;
int main(){
    map<char,int> mp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        if(mp[s[i]]>1){
            cout<<s[i];
        }
    }
}