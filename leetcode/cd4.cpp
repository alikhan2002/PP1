#include <iostream>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        int n=a.size();
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                if(b[i]==c[i]){
                    cnt++;
                }else if(a[i]==c[i]){
                    cnt++;
                }else {
                    cnt+=2;
                }
            }
        }
        if(cnt!=n){
        cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }
}