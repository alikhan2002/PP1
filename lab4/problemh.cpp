#include <iostream>
using namespace std;
int main(){
int n,min=1e9+17,m,drop=10000,cnt=0;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin>>a[i][j];
    }
}
int ind;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
        cnt+=a[i][j];
        if(cnt<drop){
            drop=cnt;
            ind=i;
        
    }cnt=0;
}cout<<++ind;



return 0;
}