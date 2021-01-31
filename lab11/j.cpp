#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
using namespace std;
int main(){
double x,y;
cin>>x>>y;
int n;
cin>>n;
multimap<double,pair<int,int > > mp;
for(int i=0;i<n;i++){;
    double x1,y1;
    cin>>x1>>y1;
    mp.emplace(sqrt(abs((x1-x)*(x1-x))+abs((y1-y)*(y1-y))),pair<int,int>(x1,y1));
     
}
multimap<double,pair<int,int > > :: iterator it;
for(it=mp.begin();it!=mp.end();it++){
  cout<<(*it).second.first<<" "<<(*it).second.second<<endl;
}





    return 0;
}