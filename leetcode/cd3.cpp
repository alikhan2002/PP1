#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        int k;
        cin>>k;
        cin>>s;
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }else{
                cnt--;
            }
            ans=min(cnt,ans);

            
        }
        cout<<abs(ans)<<'\n';
  }
}

