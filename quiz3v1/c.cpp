#include <iostream>
#include <map>
using namespace std;
void f1(char c,char a,int x, char b,int y){
map<char,int> mp;
map<char,int> mps;
mp.insert (pair<char,int>(a,x) );
mps.insert (pair<char,int>(b,y) );
map<char, int>::iterator it;
map<char, int>::iterator it2;
for(it=mp.begin(),it2=mps.begin();it!=mp.end(),it2!=mps.end();it++,it2++){
    if(c=='+'){
        cout<<(*it).first<<" + "<<(*it2).first<<" = "<<(*it).second+(*it2).second<<endl;
 }if(c=='-'){
        cout<<(*it).first<<" - "<<(*it2).first<<" = "<<(*it).second-(*it2).second<<endl;
 }if(c=='*'){
         cout<<(*it).first<<" * "<<(*it2).first<<" = "<<(*it).second*(*it2).second<<endl;
 }
}

}


int main(){
int n,x,y;
cin>>n;
char c,a,b;
map<char,int> mp;
for(int i=0;i<n;i++){
cin>>c>>a>>x>>b>>y;
f1(c,a,x,b,y);
}





}