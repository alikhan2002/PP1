#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,x,c,k,j;
float l;
cin>>a>>x>>b;
c='+';
k='-';
j='*';
l='/';
if(x=c){
cout<<a+b;
}else if(x=k){
    cout<<a-b;
}else if(x=j){
cout<<a*b;
} else if(x=l){
    cout<<a/b;
}




    return 0;
}