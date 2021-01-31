#include <iostream>
#include <string>
using namespace std;
bool valid(string s)
{
    for(int i=0;i<s.size();i++){
     if((s[i]-'0')%2!=0) return false;
    
   }return true;
}
int main(){
string s;
cin>>s;
if(valid(s)==true) cout<<"Valid";
else cout<<"Not valid";
return 0;
}