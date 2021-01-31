#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> v;
    string s;
    getline(cin,s);
    int sum=0;
    for(int i=0;i<s.size();i++){
        if((s[i]>='!' && s[i]<='/') || (s[i]>=58 && s[i]<=59)){
            sum++;
        }
    }cout<<sum;
}