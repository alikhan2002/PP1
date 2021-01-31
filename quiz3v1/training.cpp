#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main (){
stringstream ss;
    string str;
    int cnt = 0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        ss<<str<<" ";

    }
 
int maxi=-11111;
string s;
 for(int i = 0; i < n; i++){
        ss >> str;
        s=str;
        if(s.size()>maxi){
            maxi=s.size();
        }
    }


    return 0;
}