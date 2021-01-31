#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPalindrome(vector<char> v){
    for(int i = 0;i<v.size()/2;i++)
        {if(v[i]!=v[v.size()-1 - i]){
               return false;
               }
        }
            return true;
}
int main(){
string s;
cin>>s;
vector<char> v(s.begin(),s.end());
sort(v.begin(),v.end());
do{
         if(isPalindrome(v)==1){
         for(int i = 0;i<1;i++)
             {cout<<"ZA WARUDO TOKI WO TOMARE";}
                 return 0;}
                }
while(next_permutation(v.begin(),v.end()));
cout<<"JOJO";
}
