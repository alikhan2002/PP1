#include <iostream>
using namespace std;
int main(){
string str,s,w="";
getline(cin,str);
int n=0,cnt=0;
while(n<str.size()){
    if(str[n++]!=' '){
        w+=str[n-1];
       }else{        
        cnt++;
       
        if(s==w){
            cout<<s<<" : "<< cnt<<endl;
            }else cnt=0;
         s=w;
         w="";
    }
    
}

}