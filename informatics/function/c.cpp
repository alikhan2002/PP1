#include <iostream>
using namespace std;
bool Xor(bool x, bool y){
if(x==1 && y==1) return false;
if(x==1 && y==0) return true;
if(x==0 && y==1) return true;
if(x==0 && y==0) return false;
}
int main(){
int x,y;
cin>>x>>y;
if(Xor(x,y)==true){
    cout<<"1";
}else cout<<"0";
return 0;
}