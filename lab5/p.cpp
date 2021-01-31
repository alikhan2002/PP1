#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
char x='a';
char y;
cin>>s;
for(int i=0; i<s.size();i++){
  
    if(s[i]>=x)
    if(s[i]=='z'){
   s[i]='`'; }
   y=s[i]+1;
   
   
   cout<<y;
}
return 0;
}