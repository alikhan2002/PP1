#include<iostream>
using namespace std;
int main(){
   int check,n=0,c=0,p;
   cin>>n;
  for(int i=2;i<=100000;i++){
    check=0;  
    for(int j=2;j<=i/2;j++){ 
        if(i%j==0){
           check=1;
           break;
        }    
    }
   
  if(check==0)
    c++;
      if(c==n){
      p=i;
      break;
     }
 }
 c=0;
  for(int i=2;i<=100000;i++){
    check=0;  
    for(int j=2;j<=i/2;j++){ 
        if(i%j==0){
           check=1;
           break;
        }    
    }
   
  if(check==0)
    c++;
      if(c==p){
      cout<<i;
      break;
     }
 }

return 0;

}