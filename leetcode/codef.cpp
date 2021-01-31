#include <iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
map<vector<int>, string> mp;
int n,m;
cin>>n>>m;
string s;
for(int i=0;i<n;i++){
    cin>>s;
int a,a1,a2,a3;
char c;
vector<int> v1;
cin>>a>>c>>a1>>c>>a2>>c>>a3;
v1.push_back((a,a1,a2,a3));
mp[v1]=s;
}
while(m--){
cin>>s;
int a,a1,a2,a3;
char c;
vector<int> v1;
cin>>a>>c>>a1>>c>>a2>>c>>a3>>c;
v1.push_back((a,a1,a2,a3));
cout<<s<<" "<<a<<"."<<a1<<"."<<a2<<"."<<a3<<";"<<" "<<"#"<<mp[v1]<<'\n';

}



}