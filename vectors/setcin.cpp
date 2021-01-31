#include <iostream>
#include <set>
using namespace std;
void f(){
 set<int> s;
 int x;
    while(1){
        if(x==0) break;
        cin>>x;// вводим числа, после этого сет его упорядивает и выводит
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}
int main(){
    f();
    return 0;
}