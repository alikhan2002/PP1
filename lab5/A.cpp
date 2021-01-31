#include <iostream>
using namespace std;
int main(){
int a=0,b=0;
string s;
int i;
cin>>s;
for(i=0;i<s.size();i++){

if(s[i]>='a'&& s[i]<='z')a++;
else b++;
}
cout<<a<<" "<<b;

    return 0;
}