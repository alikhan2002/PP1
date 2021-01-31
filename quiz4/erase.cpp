#include <iostream>
using namespace std;
int main(){
string str;
getline(cin,str);
int n;
cin>>n;
str.erase(0,n);
cout<<str;
}