#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int> v;
int n;
cin>>n;
int x;
for(int i=0;i<n;i++){
cin>>x;
v.push_back(x);
}
int a;
cin>>a;
int cnt=0;
for(int i=0;i<n;i++){
      if(v[i]==a){
          cnt++;
      }
}
if(cnt>=1){
    cout<<"Yes";
}else{
    cout<<"No";
}


return 0;
}