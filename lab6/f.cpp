#include <iostream>

#include <string>
using namespace std;
string valid(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if((s[i]-'0')%==0){ cnt++;}
         return cnt;
    }return 0;
}
int main(){
    string s;
    int cnt=0;
    cin>>s;
    int n;
    cin>>n;
    if(valid(s)==n)
    cout<<"YES";
    else cout<<"NO";
    return 0;
    }