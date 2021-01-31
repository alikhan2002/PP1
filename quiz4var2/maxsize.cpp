#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main (){
    stringstream ss;
    string str;
    int cnt = 0;
    int maxi=-1111;
    while(cin >> str){
        ss << str << " ";
        cnt++;// считает количество слов
    }
    cout<<cnt<<endl;
    for(int i = 0; i<cnt; ++i){
        
        ss >> str;
       
    }

    cout <<maxi<< endl;

    return 0;
}