// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int r[n];
int a[n][m]; 
for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
       cin>>a[i][j];

       }
   }
int maxi=-111111,ind;
  for(int i=n-1;i>=0;i--){
    r[i]=0;
   for(int j=m-1;j>=0;j--){
       r[i]+=a[i][j];
       if(a[i][j]>maxi){
       maxi=a[i][j];
       ind=i;}
     }
   }cout<<ind;
   return 0;
}
