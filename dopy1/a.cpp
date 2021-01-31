#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int x[n],y[n];
for(int i=0;i<n;i++){
   
		cin>>x[i];//=rand() % 101 - 50;
		cin>>y[i];//=rand() % 101 - 50;
		
}
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
        if(x[j]<x[k]){ swap(x[j],x[k]);
        swap(y[j],y[k]);}
            else if(x[j]==x[k]){
                if(y[j]<y[k]){
                    swap(y[j],y[k]);
                }
                
            }
        }
    }
        cout<<endl;
        cout<<endl;
   for(int i=0;i<n;i++){
       cout<<x[i]<<" "<<y[i];
		cout<<endl;
   }








    return 0;
}

