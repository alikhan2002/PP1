#include <iostream>
#include<map>
using namespace std;

int main(){
int n,d,m,y;
cin>>n;
string s;
char a;
map<string, int> cal;
map<string, int>:: iterator it;
// for(int i=0;i<n;i++){
// cin>>d>>a>>m>>a>>y;
// cal[(make_pair(d,m))]=y;
// }
for(int i=0;i<n;i++){
cin>>s;
cal.emplace(s,i);
}
for(it=cal.begin();it!=cal.end();it++){
    cout<<(*it).first<<endl;
}


}