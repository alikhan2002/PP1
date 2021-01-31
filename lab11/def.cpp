#include <iostream>
#include <map>
using namespace std;
int main(){
int n;
cin>>n;
int x;
map<int,int> mp;
for(int i=0;i<n;i++){
    cin>>x;
    mp[x]++;
}
int t,y;
cin>>t;
for(int i=0;i<t;i++){
    cin>>y;
    if(mp[y]>=1){
        int j=1;
        while(y--){
            if(y%j==0) cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }else cout<<"-1"<<endl;
}



}