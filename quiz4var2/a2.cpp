#include <iostream>
#include <sstream>
using namespace std;
int main(){
string str, w="",s;
stringstream ss;
getline(cin,str);
    int cnt=0,n=0;
    size_t pos = 0;
while(cin>>str){
ss<< str <<" ";
// cnt++;
}
    for(int i = 0; i < str.size(); i++){
        ss>>str;
        size_t fpos = str.find(str, pos);
        if( fpos != string::npos){
            pos = fpos + 1;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0; 







}