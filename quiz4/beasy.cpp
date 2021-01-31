#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntu=0;
    int cntl=0;
    for(int i=0;i<s.size();i++){
        if(s.size()%2==1){
            cout<<-1;
            return 0;
        }
        if(s[i]>='A' && s[i]<='Z'){
            cntu++;
        }else if(s[i]>='a' && s[i]<='z'){
            cntl++;
        }
   
    }
     for(int i=0;i<s.size();i++){
         if(cntu==cntl){
             cout<<0;
             return 0;
         }
         if(cntl==0){
             cout<<s.size();
             return 0;
         }
         if(cntu==0){
             cout<<s.size()/2;
             return 0;
         }
         if(cntu>cntl){
             cout<<(cntu-cntl);
             return 0;
         }else if(cntl>cntu){
             cout<<(cntl-cntu)/2;
             return 0;
         }

     }

}