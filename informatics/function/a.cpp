#include <iostream>
using namespace std;
int mini(int a, int b){
    if(a>b) return b;
    return a;
}

 int main(){
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     cout<<mini(mini(a,b),mini(c,d));
     return 0;
 }