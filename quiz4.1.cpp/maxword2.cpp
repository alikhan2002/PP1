#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main (){

    stringstream ss;

    string str,maxword;
    int cnt = 0,maxi=-1111;
    
    while(cin >> str){
        ss << str << " ";
        cnt++;// считает количество слов
    }

   
    cout << cnt << endl;

    for(int i = 0; i < cnt; ++i){
        ss >> str;
        cout << str << " ";
    }

    cout << endl;;
    // cout <<maxword<< endl;

    return 0;
}