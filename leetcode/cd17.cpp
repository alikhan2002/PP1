#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n,ans;
    cin>>n;
    long long t=pow(10,floor(log10(n)));
    while(t<=n){
        t=t+pow(10,floor(log10(n)));
    }
    ans=t-n;
     cout<<ans;
}