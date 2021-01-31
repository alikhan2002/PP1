#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main(){
int n,x;
cin>>n;
vector<int> v;
int a[n];
while(1){
    if(x==0) break;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}



}