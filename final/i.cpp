#include <iostream>
using namespace std;
int main(){
       string s,s1,a;
       cin>>s>>s1;
       int l=s.size()-1,r=1;
       for(int i=0;i<s.size();i++){
              if(s.find(s1)!=string::npos){
              cout<<s;
              break;
       }  
              while(l>=0 && r<s1.size()){
                     if(s.substr(l)==s1.substr(0,r)){
                     s.erase(l,10);
                     cout<<s+s1;
                     return 0;
                     }
              l--;
              r++;
              }if(s[s.size()-1]!=s1[0]){
              cout<<s+s1;
              break;
              }
       }  
}

