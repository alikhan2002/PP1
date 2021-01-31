#include <bits/stdc++.h>
#include<string>
using namespace std;

string up(string s){
    for(int i=0;i<s.size();i++){
        if((i)%2==0)
        s[i]=s[i]-'a'+'A';
    }
return s;


}
int main(){
string s;
cin >> s;
cout << up(s);


return 0;
}