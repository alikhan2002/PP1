#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
int n;
cin>>n;
multimap<int,int> mp;
for(int i=0;i<n;i++){;
    int m,s;
    cin>>s>>m;
    mp.insert(pair<int,int>(s,m));
}
multiset<pair<int,int> > b;
multimap<int,int> :: iterator it;
for(it=mp.begin();it!=mp.end();it++){
    b.insert(pair<int,int>((*it).first,(*it).second));
}
for(auto i=b.begin();i!=b.end();i++){
    cout<<(*i).first<<" "<<(*i).second<<endl;
}





    return 0;
}