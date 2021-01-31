#include<iostream>
#include <cmath>
using namespace std;
int f(int n){
int m=1;
int cnt=0;
if(n==1) return 1;
for(int i=0;i<n;i++){
    if(n%m==0 && n!=m) cnt++;
       m++;
    }
int maxi=-1111;
for(int i=1;i<n;i++){
    if(n%i==0) maxi=i;
} return cnt+f(maxi);
}


int main(){
int n,m=1;
cin>>n;
int cnt;
cout<<f(n);



}