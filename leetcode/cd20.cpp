#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b;
        c=max(a,b);
        d=min(a,b);
        long long x=c/d;
        int cnt=0,p=0;
        if(c%d!=0){
            cout<<-1<<'\n';
        }else{
            while(x%2==0){
                x/=2;
                cnt++;
            } 
            if(x==1){
                while(cnt>0){
                    if(cnt>0 && cnt-3>=0){
                        cnt-=3;
                        p++;
                    }else if(cnt==2){
                        cnt-=2;
                        p++;
                    }else if(cnt==1){
                        cnt--;
                        p++;
                    }
                }
                    cout<<p<<'\n';
            }else{
            cout<<-1<<'\n';
            }
        }
    }
}