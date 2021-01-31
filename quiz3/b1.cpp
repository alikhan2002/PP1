#include <iostream>
#include <map>
using namespace std;
int main(){
map<string,int> m;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;
}
map<string,int> :: iterator it;
for(it=m.begin();it!=m.end();it++ ){
    if((*it).second>1){
        cout<<(*it).first<<endl;
        m.erase((*it).first);
    }else{
        m.insert(pair<string,int>((*it).first,(*it).second));
    }
}if(n==m.size()){
    cout<<"Understandable, have a great day";
}
}