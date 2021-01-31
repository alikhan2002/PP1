#include <iostream>
using namespace std;
int maxi(int a,int b){
    if(a>b) return a;
    return b;
}int maxi(int a,int b,int c,int d){
    cout<<maxi(maxi(a,b),maxi(c,d));
}
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
maxi(a,b,c,d);
return 0;
}