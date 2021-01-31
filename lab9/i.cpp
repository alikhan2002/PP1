#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
multiset<string> ms;
string s;
int n;
cin>>n;
map<string,int> mp;

    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]++;
        if(mp[s]==1){
            cout<<"new user added"<<endl;
        }else{
            cout<<"user already exists"<<endl;
        }

    }
}
