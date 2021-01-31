#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
bool f(ll int n){
    if (n==0) return false;
    if (n==1) return false;
    if (n==-1) return false;
    for (int i = 2; i <= sqrt(abs(n)); i++) {
        if (abs(n) % i == 0)
            return false;
    }
    return true;
}
int main(){
int n;
cin>>n;
vector<ll int> v;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    v.push_back(a[i]);
}
// int m=sizeof(a)/sizeof(int);

int s=count_if(v.begin(),v.end(),f);
cout<<s;


}