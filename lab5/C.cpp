#include <iostream>
#include <string>
using namespace std;
int main(){
string x,s,t;
cin>>s;
cin>>t;
if(s.find(t)!=string::npos)
cout<<"YES";
else cout<<"NO";


    return 0;
}