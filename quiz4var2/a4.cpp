#include <iostream> 
#include <sstream>
#include <map>
using namespace std;
int main(){
map<string,int> mp;
stringstream ss;
string str;
multimap<int,string> mp1;
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int cnt=0;
while(cin>>str){
ss<< str <<" ";
cnt++;
}
for(int i=0;i<cnt;i++){
    ss>>str;
    mp[str]++;
}
map<string,int>::reverse_iterator it;
multimap<int,string>::iterator it1;
for(it=mp.rbegin();it!=mp.rend();it++){
cout<<(*it).first<<" : "<<(*it).second<<endl;
}
// for(it=mp.begin();it!=mp.end();it++){
//     mp1.insert(make_pair((*it).second,(*it).first));
// }
// for(it1=mp1.begin();it1!=mp1.end();it1++){
//    cout<<(*it1).second<<" : "<<(*it1).first<<endl;
// }

}