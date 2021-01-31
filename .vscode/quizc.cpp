#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,a,b;
cin>>x>>y>>a>>b;
if((y=b) &&(x-b>0)){
cout<<x-b;
}else if(y=b && (x-b<0)){
cout<<b-x;}else if(x==0 && y==0){
    cout<<sqrt(a*a+b*b);
}else if(a==0 && b==0){
    cout<<sqrt(x*x+y*y);}
return 0;
}