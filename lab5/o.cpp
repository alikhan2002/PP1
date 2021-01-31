#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
char x='a';
cin>>s;
int maxi;
for(int i=0; i<s.size();i++){
   if(s[i]>x)
   x=s[i];
}
cout<<x;
return 0;
}