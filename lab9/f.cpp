#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<char> b;
string s;
cin>>s;
bool res=true;
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        b.push(s[i]);
    }else if(s[i]==')'){
        if(!b.empty()){
            b.pop();
        }else{
            res=false;

        }
    }
}
if(res && b.empty()){
    cout<<"YES";
}else {
    cout<<"NO";
}



}