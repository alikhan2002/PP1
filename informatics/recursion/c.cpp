#include <iostream>
using namespace std;
int sis(string s,int n,int cnt){
if(s.size()<n) return 0;
if(s[n]>'46' && s[n]<'58') 
return (s,n+1,cnt+1);
}
int main(){
string s;
cin>>s;
int n=0,cnt=0;
cout<<sis("",0,cnt);
}