#include <iostream>
using namespace std;
int main(){
int s,v,t,g,q;
s=109;
cin>>v>>t;
if(v>0 && (v*t)>s){
  g=((v*t)/s);
 q=(s*g-v*t)*(-1);
 cout<<q<<endl;
  }else if(v>0 && (v*t)<s){
g=(s-(v*t));
    cout<<g<<endl;
  }else if(v<0){
       g=((v*t)/s);
 q=(s*g-v*t)*(-1);}
       else if(v==0){
cout<<s<<endl;
       }

    return 0;
}