#include <iostream>
using namespace std;
int sumi(string s){
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }return sum;
}
int main(){
string s;
cin>>s;
cout<<sumi(s);
return 0;
}