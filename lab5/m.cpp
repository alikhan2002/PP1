#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
char a;
int n,cnt=0;
cin>>s>>a>>n;

for(int i = 0;i < s.size();i ++) {
       if(s[i]==a)++ cnt;
} 
    if(n==cnt)
cout<<"YES";
else cout<<"NO";
return 0;
}