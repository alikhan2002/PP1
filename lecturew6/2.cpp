#include <iostream>
using namespace std;
int main(){
string str;
getline(cin, str);
int i;
cout<<str.size()<<endl;
for(i=0;i<str.size();i++){
cout<<str[i]<<'\n';

}




    return 0;
}