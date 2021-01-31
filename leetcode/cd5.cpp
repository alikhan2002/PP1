#include <iostream>
#include<vector>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         string s;
         cin>>s;
         int sum=0;
         int cnto=0;
         vector<char> v;
         for(int i=0;i<s.size();i++){
             if((s[i]-'0')%2==1){
                cnto++;
                v.push_back(s[i]);
             }
         }
         if(cnto<2){
         cout<<"-1"<<'\n';
         }else{ 
         cout<<v[0]<<v[1]<<'\n';
         }
     }
}
