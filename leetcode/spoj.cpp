#include<iostream>
using namespace std;
int main(){
int t,n;
cin>>t;
for(int i=0;i<t;i++){
 string s;
    cin>>n;
    cin>>s;
    if(s.substr(0,4)=="2020"){
        cout<<"YES"; 
    } else if(s.substr(0,3)=="202"&&s[n-1]=='0'){
        cout<<"YES";
    }else if(s.substr(0,2)=="20" && (s.substr(n-2,n)=="20")){
        cout<<"YES";
    }else if(s[0]=='2'&& s.substr(n-3,n)=="020"){
        cout<<"YES";
    }else if(s.substr(n-4,n)=="2020"){
        cout<<"YES";
    }else cout<<"NO";
}







}