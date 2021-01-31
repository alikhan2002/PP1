#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
int n,x,y;
cin>>n;
multimap<int,int> mp;
for(int i=0;i<n;i++){
cin>>x>>y;
mp.insert(pair<int,int>(x+y,i+1));
}
multimap<int,int>:: iterator it;
for(it=mp.begin();it!=mp.end();it++){
    cout<<(*it).second<<" ";
}
}