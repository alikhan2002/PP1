#include <iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m]; 
for(int i=0; i<n;i++){
    for(int j=0;j<m;j++){
       cin>>a[i][j];

       }
   }
 int maxi=-1;
 int ind1,ind2;
for(int i=0; i<n;i++){
   for(int j=0;j<m;j++){
    if(a[i][j]>maxi){
     maxi=a[i][j];
     ind1=i;
     ind2=j;
      }
   }
}cout<<maxi<<endl<<ind1<<" "<<ind2;

    return 0;
}