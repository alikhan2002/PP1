#include <iostream>
using namespace std;

int f(string s, int ind)
{
    if(ind==s.size()) return 0;
    else return f(s,ind+1)+(s[ind]-'0')/2;
}
int main(){
string s;
cin>>s;
cout<<f(s,0);

return 0;
}