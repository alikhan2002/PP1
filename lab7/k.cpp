#include <iostream>
using namespace std;
int f(string s){
 int maxi=-11111;
 for(int i=0;i<s.size();i++){
     if(int(s[i]-'0')>maxi)
     maxi=s[i]-'0';
 }return maxi;
}
int main(){
    string s;
    cin>>s;
    cout<<f(s);
    return 0;
}