#include <iostream>
using namespace std;
double degree(double a,int n){
if(n==0) return 1;
if(n>0) return degree(a,n-1)*a;
}
int main(){
double a,n;
cin>>a>>n;
cout<<degree(a,n);

return 0;
}
