#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v;
    string s;
    getline(cin,s);
    int j=0,res=0;
    for(int i=0;i<s.size();i++){
        string ch="";
        while(s[j]!=' ' ){
            ch+=s[j];
            j++;
        }j++;
        cout<<ch<<" ";
        v.push_back(ch);
        int n=ch.size();
        res=max(res,n);
    }
     for(int i=0;i<s.size();i++){
        if(v[i].size()==res){
            // cout<<v[i];
            return 0;
        }
     }
}