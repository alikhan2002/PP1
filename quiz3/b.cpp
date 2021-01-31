#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;
int main(){
map<string,int> mp;
int n;
cin>>n;
bool exist=false;
for(int i=0;i<n;i++){
string s;
cin>>s;
if(mp[s]==1){
      exist=true;
cout<<s<<endl;

}
mp[s]++;
}
if(exist==false){
      cout<<"Understandable, have a great day";
}

      return 0;
}



