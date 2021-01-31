#include <iostream>
using namespace std;
int main(){
long long int n,max = -1e9 - 17,ind1,ind2;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }   
}  

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i][j]>max){
        max=a[i][j];
        ind1=i;
        ind2=j;
        }
    }     
}  cout<<++ind1<<" "<<++ind2;





    return 0;
}