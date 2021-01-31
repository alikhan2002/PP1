#include <iostream>
using namespace std;
int main(){
int a,b,c,x;
b=c/10;
cin>>c;
if((c>0)&&(c<99)){
    cout<<(c%10+c/10);
}else if ((c>99)&&(c<1000)){
    cout<<(c/100+c%10+(c/10)%10);
}

    return 0;
}