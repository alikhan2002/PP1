#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
if(s==t){
cout<<0;
return 0;
}
int cnt=1;
bool res=false;
for(int i=0;i<t.size();i++){
rotate(t.begin(),t.begin()+1,t.end());
if(s==t){
    res=true;
     break;
}cnt++;
}
if(res) cout<<cnt;
else cout<<"Understandable have a nice day";
   


}