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
 int ind,mx,sum=0;
for(int i=0; i<n;i++){
   for(int j=0;j<m;j++){
    if(a[i][j]>maxi){
     maxi=a[i][j];
     ind=i;
      }
   }
}
int cnt=1;
int sum1,x;
int r[n];
for(int i=0; i<n;i++){
     r[i]=0;
   for(int j=0;j<m;j++){
      r[i]+=a[i][j];
    if(a[i][j]==maxi){
     cnt++;} 
 }
 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++)
 {
  if(cnt>1){
        sum1=r[i];}
         else
     { break;
   }
      
   if(r[i]>sum1){
            ind=i;
         }else if(r[i]==sum1){
            ind=i-1;}
       }
    }
}
cout<<ind<<" "<<sum1;

    return 0;
}