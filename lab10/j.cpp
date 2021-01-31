#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector<int> v;
int n,r;
cin>>n>>r;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    v.push_back(a[i]);
}
rotate(v.begin(),v.begin()+r,v.end());
reverse(v.begin(),v.end());
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}

}