#include <iostream>
#include <map>
using namespace std;
int main(){
int n;
cin>>n;
map<string,string> mp;
map<string,bool> mp1;
for(int i=0;i<n;i++){
    string s,p;
    cin>>s>>p;
    mp1[s]=true;
    mp.emplace(s,p);
}
int m;
cin>>m;
map<string,string> :: iterator it;
for(int i=0;i<m;i++){
    string s,p;
    cin>>s>>p;
            for(it=mp.begin();it!=mp.end();it++){
                if(mp1[s]==false){
                   cout<<"login error"<<endl;
                   break;
                }
                if(s==(*it).first && p==(*it).second) {
                    cout<<"correct password"<<endl; 
                    break;}
                if(s==(*it).first && p!=(*it).second) {
                    cout<<"password error"<<endl; 
                    }
        }
}


    return 0;
}