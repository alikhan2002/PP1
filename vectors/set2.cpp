#include <iostream>
#include <vector>
#include <set>// не хранит дубликаты
using namespace std;
void f(){
    set<int> s;
    s.insert(-1);
    s.insert(-5);
    s.insert(-10);
    s.insert(10);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    cout<<s.size()<<endl;
    cout<<*s.begin()<<" "<<*s.rbegin();//s.begin самый маленький обьект, s.rbegin (reversebegin)-самый большой
    // 6 обьектов и -10 мин 10 макс
        }
int main(){
    f();
    return 0;
}