#include<iostream>
#include<map>
using namespace std;
int main(){
int t;
cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<char,int> mp;
       
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
             for(int j=0;j<s.size();j++){
              mp[s[j]]++;
             }
            
        }
        bool res=true;
         map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if( ((*it).second)%n!=0){
                res=false;
                break;
            }
        }if(res){
            cout<<"YES"<<'\n';
            } else{ 
            cout<<"NO"<<'\n';
          }
       }

    }



