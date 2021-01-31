#include<iostream>
#include<stack>
#include<algorithm>
#include <utility>
#include<vector>
using namespace std;
int main(){                                     
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int v[100000];
    int arr[100000];
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]=x;
        if (i==0){
            arr[0]=v[0];
        } else{
            int num=0,j,mi,res;
            j=i;
            res=0;
            mi=v[i];
            while(true){
                num++;
                if (mi>v[j]){mi=v[j];}
                if(res<num*mi){res=num*mi;}
                j--;
                if (j<0){break;}
            }
            arr[i]=max(arr[i-1],res);
        }
    }
    cout<<arr[n-1];
}