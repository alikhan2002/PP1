#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
if(s[i]+n>'Z'){
    s[i]=n-(90-s[i])+64;
}else{
s[i]+=n;
}

}
for(int i=0;i<s.size();i++){
cout<<s[i];
}

}