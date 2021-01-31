#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[s.size()]={0};
    int b[s.size()];
    int cnt=0;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[i]==s[j] && i!=j){
                a[i]=cnt;
                cnt++;
            }
        }cnt=0;
    }
    for(int i=0;i<s.size();i++){
        if(a[i]>0){
            cout<<s[i];
        }
    }
}