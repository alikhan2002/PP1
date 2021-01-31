#include <iostream>
using namespace std;
int main(){
int d,c,p,n,x;
cin>>d>>c;
cin>>n>>p;
x=(d*100)+c-p*n;
if(x>0){
    cout<<x/100<<" "<<x%100;
}else if(x<0){
    cout<<(x/100)<<" "<<(x%100);
}


    return 0;
}