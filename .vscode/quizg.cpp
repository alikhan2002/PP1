#include <iostream>
using namespace std;
int main(){
int n,g,sum=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>g;
sum+=g;
}
cout<<"Average: "<<float(sum)/n<<endl;
cout<<"Sum: "<<sum;

    return 0;
}