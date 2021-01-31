#include <iostream>
#include <vector>
#include <set>// не хранит дубликаты
using namespace std;
void f(){
    set<int> v;//нету индекса v[i] деген жоқ, бірақ итератор арқылы алуға болады
    for(int i=10;i>=1;i--){
        cout<<i<<" ";
        v.insert(i);
    }
    cout<<endl;//для наглядности
    set<int> :: iterator it;// it переменная
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";//* потому что нам не нужен адрес, нужен что в этом адресе
    }
}
int main(){
    f();
    return 0;
}