#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    map<string,int> m;
    int n;
    cin>>n;
    string b[10000];
    for(int i=0;i<n;i++){
        cin>>s;
        b[i]=s;
        m[b[i]]++;
    }
int i=1;
map<string,int> :: iterator it;
for(it=m.begin(),i;it!=m.end(),i<=n;it++,i++){
    if((*it).second>1){
        cout<<(*it).first<<" "<<i<<endl;
    }else {
          cout<<(*it).first<<" "<<i+1<<endl;
    }
}

}
