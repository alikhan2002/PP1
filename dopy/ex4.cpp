#include <iostream>
using namespace std;
int main(){
int n,m;
int c=0;
int cnt=0;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(i==0 || j==m-1)
        {
          int r=i, c=j;
              while(r<=n-1 && c>=0)
              {
                 a[r][c]=cnt;
                 cnt++;
                 r++;
                 c--;
             }
         }
     }
}
    for(int j=0;j<m;j++)
    {
       for(int i=0;i<n;i++)
       {
           cout.width(3);
       cout<<a[i][j];
     } cout<<endl;
}
return 0;
}