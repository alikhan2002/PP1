#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,m,min=1e9+17;
cin>>n>>m;
int a[n][m];
int r[n],c[m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    if(min>c[j])
    min=c[j];
}cout<<min;


return 0;}