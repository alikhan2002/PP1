#include <iostream>
using namespace std;
int maxi(string s){
    int maxim=-11111;
   for(int i=0;i<s.size();i++){
    if((s[i]-'0')>maxim)
  maxim=s[i]-'0';
   }return maxim;
}
int main(){
string s;
cin>>s;
cout<<maxi(s);
}