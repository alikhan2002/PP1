#include <iostream>
using namespace std;
int main(){
int n,k;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    a[i][j]=i*j;
       if(a[0][j]==0){
          a[0][j]=1*j;
       }      if(a[i][0]==0){
          a[i][0]=i*1;
       }cout<<a[i][j]<<" ";
    
    }cout<<endl;
} 

return 0;
}