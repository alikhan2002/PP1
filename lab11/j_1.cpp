#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int n;
cin>>n;
int mini=10000;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}
for(int i=0;i<n;i++){
    if(sqrt(a[i]-x)*(a[i]-x)+(b[i]-y)*(b[i]-y)<mini){
        
    }
}