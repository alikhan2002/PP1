#include <iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m];
int r[n];
for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
       cin>>a[i][j];

   }
}
int maxi=-111111111,ind=0,ind2=0;
int mx=-5555555;
  for(int i=0;i<n;i++){
        r[i]=0;
       for(int j=0;j<m;j++){
           r[i]+=a[i][j];
           if(a[i][j]>maxi){
           maxi=a[i][j];
           ind=i;}
              if(r[i]>mx){
                  mx=r[i];
                  ind2=i;
              }    
    }
}

int cnt=0;
for(int i=0;i<n;i++){
 for(int j=0;j<m;j++){
       if(a[i][j]==maxi)
       cnt++;

   }
}
if(cnt==1){

    cout<<ind;
    return 0;
}
if(cnt>1){
if(ind==ind2){
    cout<<ind;
}else if(ind!=ind2){
    cout<<ind2;
}
}

   
return 0;
}



   