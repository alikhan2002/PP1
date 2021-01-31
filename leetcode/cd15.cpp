#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnto=0,cntz=0;
    if(s.size()<7){
        cout<<"NO";
    }else {
        bool res1=false;
         bool res2=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cntz++;
                cnto=0;
                if(cntz==7){
                    cout<<"YES";
                    res1=true;
                    break;
                }
              }else{
                cnto++;
                cntz=0;
                if(cnto==7){
                    cout<<"YES";
                    res2=true;
                    break;
                }
            }
        }
        if(res1==false && res2==false){
            cout<<"NO";
        }
    }
}