#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
string s,w="",str;
int cnt=0;
size_t pos = 0;
getline(cin,s);
// reverse(s.begin(),s.end());
int n=0;
while(n<s.size()){
    if(s[n++]!=' '){
     w+=s[n-1];
    }else {
        str=w;
        w="";}
    for(int i = 0; i < s.size(); i++){
        size_t fpos = s.find(str, pos);
        if( fpos != string::npos){
            pos = fpos + 1;
            cnt++;
        }
    }
cout<<cnt<<endl;
}
}