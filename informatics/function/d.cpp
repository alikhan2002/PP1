#include <iostream>
using namespace std;
bool Election(bool x, bool y, bool z)
{if(x==1 && y==1 && z==0) return true;
if(x==1 && y==0 && z==0) return false;
if(x==0 && y==1 && z==0) return false;
if(x==0 && y==0 && z==1) return false;
if(x==0 && y==0 && z==0) return false;
return true;
}
int main(){
int x,y,z;
cin>>x>>y>>z;
if(Election(x,y,z)==true){
    cout<<"1";
}else{
    cout<<"0";}
    return 0;
}