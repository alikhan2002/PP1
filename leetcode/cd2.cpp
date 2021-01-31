#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    bool res=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            cnt++;
        }else{
            cnt--;
        }
        if(cnt<0){
            res=false;
            break;
        }
    }
    if(cnt!=0 || res==false){
        cout<<"NO";
    }else cout<<"YES";
}

