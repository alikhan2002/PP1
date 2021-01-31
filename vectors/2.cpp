#include <iostream>
#include <vector>
using namespace std;
void f(){
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    vector<int> :: iterator it;// it переменная
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";//* потому что нам не нужен адрес, нужен что в этом адресе
    }
}
int main(){
    f();
    return 0;
}