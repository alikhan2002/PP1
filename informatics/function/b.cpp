#include <iostream>
using namespace std;
double degree(double a,int b){
   int res=1;
if(b==0) return 1;
if(b==1) return a;
return degree(a,b-1)*a;
}
int main(){
double a,b;
cin>>a>>b;
cout<<degree(a,b);
}