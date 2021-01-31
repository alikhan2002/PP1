#include <iostream>
#include <string>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
int cnt=0;
size_t pos=0;
for(int i=0;i<t.size();i++){
    pos=t.find(s,pos);
if(pos!=string::npos){
cnt++;
if(pos==string::npos)
    cout<<"NO";
    break;
pos++;
}
}


return 0;
}
