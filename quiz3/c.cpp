#include <iostream>
using namespace std;
char a[15][15];
bool used[15][15];
void dfs(int x,int y,int n){
	used[x][y]=true;
	if (x+1 < n && a[x+1][y]=='.' && !used[x+1][y]) dfs(x+1,y,n);
	if (x-1 >= 0 && a[x-1][y]=='.' && !used[x-1][y]) dfs(x-1,y,n);
	if (y+1 < n && a[x][y+1]=='.' && !used[x][y+1]) dfs(x,y+1,n);
	if (y-1 >= 0 && a[x][y-1]=='.' && !used[x][y-1]) dfs(x,y-1,n);
}
int main(){
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	dfs(y-1,x-1, n);
	int cnt=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (used[i][j]) cnt++;
		}
	}
	cout<<cnt;
}