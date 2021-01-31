#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<char> sk;
string s;
cin>>s;
bool res=true;
bool res1=false;
for(int i=0;i<s.size();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
        sk.push(s[i]);
    } else if(s[i]==')' && !sk.empty() && sk.top()=='(' ){
        sk.pop();
    }else if(s[i]=='}' && !sk.empty() && sk.top()=='{' ){
        sk.pop();
    }else if(s[i]==']' && !sk.empty() && sk.top()=='[' ){
        sk.pop();
    }else if ((s[i] == '}' || s[i] == ')' || s[i]==']') && sk.empty()) {
                res=false;
                break;
        }else if (!sk.empty() || (s[i] == ')' && sk.top() == '(') || (s[i] == '}' && sk.top() == '{') || (s[i] == ']' && sk.top() == '[')) {
                res1=true;
                break;
 }
}
if(sk.empty() && (res || res1)) cout<<"yes";
else cout<<"no";
}