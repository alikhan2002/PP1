#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cntU=0,cntd=0,cntl=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z') cntU++;
            if(s[i]>='a' && s[i]<='z') cntl++;
            if(s[i]>='0' && s[i]<='9') cntd++;
        }
        if(cntU!=0 && cntl!=0 && cntd!=0){
        cout<<s<<'\n';
        }else{
            vector<char>v;
            if(cntU==0) v.push_back('A');
            if(cntl==0) v.push_back('a');
            if(cntd==0) v.push_back('1');
            if(v.size()==1){
                if(s[0]>='a' && s[0]<='z' && cntl>1){
                    s[0]=v[0];
                    cout<<s;
                }else if(s[0]>='a' && s[0]<='z' && cntl==1){
                    s[1]=v[0];
                    cout<<s;
            }else if(s[0]>='A' && s[0]<='Z' && cntU==1){
                    s[1]=v[0];
                    cout<<s;
        }else if(s[0]>='A' && s[0]<='Z' && cntU>1){
                    s[0]=v[0];
                    cout<<s;
        }else if(s[0]>='0' && s[0]<='9' && cntd==1){
                    s[1]=v[0];
                    cout<<s;
        }else if(s[0]>='0' && s[0]<='9' && cntd>1){
                    s[0]=v[0];
                    cout<<s;
        }
    } else{
        s[0]=v[0];
        s[1]=v[1];
        cout<<s;
    }
 } cout<<endl;
}
}