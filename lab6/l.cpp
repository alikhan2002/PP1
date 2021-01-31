#include <iostream>
using namespace std;
void valid(string s){
    for(int i=0;i<s.size();i++){
    if((s[i])>'0' || (s[i])<'9'){
        if(s[i+1]==s[i]+'1') cout<<"Valid";
         return;
       }cout<<"Not Valid";
    }  
}
int main(){
string s;
cin>>s;
return 0;
}