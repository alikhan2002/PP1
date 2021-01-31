#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
int cntB=0,cntA=0,ans;
   for(int j=s.size()-1;j>=0;j--){
       if(s[j]=='A' ){
           if(cntB==0){ 
               cntA++;
           }else cntB--;
}else {
    cntB++;
}
}ans=cntA+cntB%2;
cout<<ans<<endl;
ans=0;
}



}