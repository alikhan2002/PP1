#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    char x;
    cin>>x;
    cin>>s;
    for(int i=0;i<s.size();i++){
     if(s[i]==x){
         s.erase(i,1);}
        
        
    }
  cout<<s;
  return 0;
}