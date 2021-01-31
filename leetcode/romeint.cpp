#include<iostream>
#include<map>
using namespace std;
int rome(string s){
map<char,int> m;
m['I']=1;
m['V']=5;
m['X']=10;
m['L']=50;
m['C']=100;
m['D']=500;
m['M']=1000;
int temp=0;
int res=0;
for(char c: s){ 
    int s=m[c];
    if(s<temp){
        res+=temp;
        temp=s;
    }else if(s>temp){
        if(temp==0)
            temp=s;
        else {
            res+=s-temp;
            temp=0;
        }
    }else if(s==temp){
        res+=temp+s;
        temp=0;
       }
    }   
    return res+temp;
}

int main(){
string s;
cin>>s;
cout<<rome(s);
   return 0; 
}