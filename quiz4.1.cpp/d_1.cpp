#include <iostream>
using namespace std;
int main(){
string s;
cin>>s;
string t;
cin>>t;
size_t index;
for(int i=0;(index=s.find(t,i))!=string::npos;i=index+1){
    cout<<index<<" ";
    
}
}