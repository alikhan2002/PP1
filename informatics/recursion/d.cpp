#include <iostream>
using namespace std;
string star(string s,int i){
    if(i%2==0) 
    return s+="*";
    return star(s,i+1);
}
int main(){
    string s;
    cin>>s;
    int i=0;
    cout<<star(s,0);
    return 0;
}