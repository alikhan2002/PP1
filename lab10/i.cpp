#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector<int> v;
vector<int> d;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    v.push_back(a[i]);
    d.push_back(a[i]);
}
reverse(d.begin(),d.end());
for(int i=0;i<n;i++){
    if(d[i]==v[i]){
        cout<<"OK"<<endl;
    }else {
cout<<"Instead of "<<v[i]<<" here was "<<d[i]<<endl;
    }
}

    return 0;
}