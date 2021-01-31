#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int h,n,m;
    for(int i=0;i<t;i++){
        cin>>h>>n>>m;
        while (n>0 && h>20){
            h=h/2+10;
            n--;
        }
        while(m>0){
            h-=10;
            m--;
        }
        if(h<=0){
            cout<<"YES"<<'\n';
        }else cout<<"NO"<<'\n';
        
    }
}