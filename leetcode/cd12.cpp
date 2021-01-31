#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char first,last;
        string s;
        cin>>s;
        first=s[0];
        last=s[s.size()-1]; 
        cout<<first;
        for(int i=1;i<s.size()-1;i+=2){
            cout<<s[i];
        }
        cout<<last<<'\n';
    }
}