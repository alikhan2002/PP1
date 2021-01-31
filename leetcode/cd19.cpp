#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,x,y;
   char c;
   cin>>a>>c>>b>>x>>c>>y;
   if(b<y){
       b+=60;
       a--;
   }
   
   b=b-y;
   if(a<x){
       a+=24;
   }
   a=a-x;
   cout<<a/10<<a%10<<":"<<b/10<<b%10;

}


