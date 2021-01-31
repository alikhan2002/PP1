#include <iostream>
#include <vector>
using namespace std;
int main(){
int n,t,f,cnt=0;
vector <int> v;
cin>>n;
cin>>t;
 for(int i=0;i<n;i++){
        cin>>f;
        v.push_back(f);
    }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    if((v[i]+v[j])==t){
        cnt++;
    }
}
if(cnt>=1){
    cout<<"YES";
}else{
    cout<<"NO";
}
return 0;
  }
