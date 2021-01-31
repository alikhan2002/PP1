#include <iostream>
#include <string>
using namespace std;
bool check(string p){
int len=p.size();
for(int i = 0; i < len/2; ++i)
	{
		if(p[i] != p[len-i-1]){
            return false ;
        }
   
   } return true;
}

int main(){
string str;
cin>>str;
if(check(str)){
    cout<<"YES";
}else{
    cout<<"NO";
}

return 0;
}