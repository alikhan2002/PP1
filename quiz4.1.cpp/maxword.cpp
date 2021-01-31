#include <iostream>
#include <sstream>
using namespace std;
int main(){
string s,g="",d;
getline(cin,s);
int n=0,maxi=-11111,sz=0;
while(n<s.size()){
    if(s[n++]!=' '){
        sz++;
        g+=s[n-1];
        }
    else {
        sz=0;
        g="";
    }
    if(sz>maxi){ 
        maxi=sz;
          d=g;
}
}
cout<<d<<" "<<maxi;

return 0;
}