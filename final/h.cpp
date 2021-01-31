#include <iostream>
#include <vector>
using namespace std;
int main(){ 
    string vigen[26][26];
    char c='a';
    string alpha[26];
    for(int i=0;i<26;i++){
        alpha[i]=c;
        c++;
    }
     for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            vigen[i][j]=alpha[(j+i)%26];
        }
    }
    string s,s1;
    cin>>s>>s1;
    int n=s.size()-s1.size();
    for(int i=0;i<n;i++){
        s1+=s1[i];
    }
    int a,b;
    for(int i=0;i<s.size();i++){
       a=(int)s[i]-97;
       b=(int)s1[i]-97;
        cout<<vigen[a][b];
    } cout<<'\n';
}