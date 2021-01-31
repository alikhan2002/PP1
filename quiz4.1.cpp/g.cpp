#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
string s;
int a,b,n;
cin>>n>>a>>b;
cin>>s;
n=s.size();
int cntu=0,cntl=0;
for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            cntu++;
        }else if(s[i]>='a' && s[i]<='z'){
            cntl++;
        }
   
    }
     for(int i=0;i<n;i++){
         if(cntu==0 || cntl==0){
             cout<<0;
             return 0;
         }
         
        //  if(cntl>cntu && a>=b ){
        //      cout<<cntu*a;
        //      return 0;
        //  }
        //   if(cntu>cntl    && b>=a ){
        //      cout<<cntu*a;
        //      return 0;

         if(cntu==cntl){
             if(a>=b){
                 cout<<cntl*b;
                 return 0;
             }else {cout<< cntu*a;
             return 0;
         }
}
         if(cntl>cntu && (a<=b ||a>=b) ){
             if(cntu*a<cntl*b){
             cout<<cntu*a;
             return 0;}
             else {
                 cout<<cntl*b;
                 return 0;
             }
         }
        //   if(cntu>cntl && a<=b ){
        //      cout<<cntl*b;
        //      return 0;
        //  }
         if(cntl<cntu && (a>=b ||a<=b) ){
             if(cntu*a<cntl*b){
             cout<<cntu*a;
             return 0;}
             else{
                 cout<<cntl*b;
                 return 0;
             }
         }
          
        //  if(cntu>cntl){
        //      cout<<(cntu-cntl);
        //      return 0;
        //  }else if(cntl>cntu){
        //      cout<<(cntl-cntu)/2;
        
         }

 }

