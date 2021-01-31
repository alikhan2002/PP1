#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
int n;
cin>>n;
map<string,int> mp;
for(int i=1;i<=n;i++){
    string s;
    cin>>s;
    mp.insert(pair<string,int>(s,i));
}
map<string,int> :: iterator it;
for(it=mp.begin();it!=mp.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}

    return 0;
}