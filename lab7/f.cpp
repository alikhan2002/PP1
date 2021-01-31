#include <iostream>
using namespace std;

int even(string s,int n)
{
 if(n==s.size()) return 0;
 if((s[n]-'0')%2==0) return even(s,n+1)+1;
 else return even (s,n+1);
}
int main(){
 string s;
 cin>>s;
 cout<<even(s,0);
 return 0;


}