#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int k,n,ans=0;
    cin>>n;
    k=n;
    vector<long long> v;
    while(n--){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    for (int i=0;i<k-1;i++){
        for (int j=i+1;j<k;j++){
            long long ss,r;
            ss=v[i]^v[j];
            if (count(v.begin(),v.end(),ss)){
                ans++;
            }
        }
    }
    cout<<ans;
}