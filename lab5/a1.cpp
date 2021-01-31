#include <iostream>
using namespace std;
int main(){
string s;
cin>>s;
int c=0,sm=0;
for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z')c++;
    else sm++;


}

cout<<c<<" "<<sm;




    return 0;
}