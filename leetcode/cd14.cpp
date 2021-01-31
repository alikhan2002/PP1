#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,k,cnt=0;
        cin>>n;
        if(n<10){
            cout<<n<<'\n';
        }else{
            k=floor(log10(n));
            ans=k*9;
            while(((pow(10,k+1)-1)/9)*(cnt+1)<=n){
                cnt++;
                }ans+=cnt;
                cout<<ans<<'\n';
        }
    }
}