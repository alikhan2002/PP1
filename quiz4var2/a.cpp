#include <iostream> 
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
map<string,int> mp;
map<string,int> mp1;
stringstream ss;
string str;
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
    mp1[str]++;
}
map<string,int>::reverse_iterator it;
map<string,int>::iterator it1;

for(it=mp.rbegin(),it1=mp1.begin();it!=mp.rend(),it1!=mp1.end();it++){
    if(it==mp.rend()) break;
    if((*it).first!=(*it1).first && (*it).second==(*it1).second){
cout<<(*it1).first<<" : "<<(*it1).second<<endl;
it1++;
} else if((*it).first==(*it1).first && (*it).second==(*it1).second)
    {cout<<(*it).first<<" : "<<(*it).second<<endl;
    it1++;
    }else if((*it).first!=(*it1).first && (*it).second!=(*it1).second){
        cout<<(*it).first<<" : "<<(*it).second<<endl;
    }
    
}
// for(it=mp.begin();it!=mp.end();it++){
//    v.push_back(make_pair((*it).second,(*it).first));
// }
// sort(v.begin(),v.end());
// reverse(v.begin(),v.end());
// vector<pair<int,string> >:: iterator ip;

//       for(ip=v.begin();ip!=v.end();ip++){
//           cout<<(*ip).second<<" : "<<(*ip).first<<endl;
//       }
        
//     }
// }
}