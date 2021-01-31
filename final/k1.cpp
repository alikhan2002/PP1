#include<iostream>
#include<map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,string> m;
    map<string,int> flags;
    while(n--){
        string x,y;
        cin>>x>>y;
        if (flags[x]==0){
            m[x]=y;
            flags[y]=1;
        } else{
        map<string,string>::iterator it;
        for (it=m.begin();it!=m.end();it++){
            if(m[it->first]==x){
                m[it->first]=y;
                break;
            }
        }
        }
    }
    map<string,string>::iterator it;
    cout<<m.size()<<"\n";
    for (it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
}