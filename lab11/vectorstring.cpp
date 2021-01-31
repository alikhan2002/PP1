#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> v;
    string s;
    cin>>s;
    v.push_back(s);
    vector<char> ch(s.begin(),s.end());
     cout<<ch[3];
    // for(int i=0;i<ch.size();i++){
       
    // }
}