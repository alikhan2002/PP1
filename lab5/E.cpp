#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
cin>>s;
int sume=0,sumo=0;
for(int i = 0;i <s.size();i++){
  if(i%2==0){
  sume+=(s[i]-'0');
    }else{
    sumo+=(s[i]-'0');
     }
  }
if(sume==sumo){
    cout<<"YES";
}else{
    cout<<"NO";
}
}