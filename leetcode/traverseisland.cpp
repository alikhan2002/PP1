 #include<iostream>
 #include<vector>
 using namespace std;

 int numIslands(vector<vector<char>>& grid) {
        int h=grid.size();
        if(h==0) return 0;
        int w=grid[0].size();
        if(w==0) return 0;
        int cnt=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(grid[i][j]=='1'){
                    cnt++; 
                    dfs(grid,i,j);
                    
                }
            }
        } return cnt;
    }
   void dfs(vector<vector<char>>& grid,int x,int y){
        grid[x][y]='0';
        if(x+1<grid.size() && grid[x+1][y]=='1') 
            dfs(grid,x+1,y);
         if(x-1>=0 && grid[x-1][y]=='1') 
            dfs(grid,x-1,y);
         if(y+1<grid[0].size() && grid[x][y+1]=='1') 
            dfs(grid,x,y+1);
         if(y-1>=0 && grid[x][y-1]=='1') 
            dfs(grid,x,y-1);
    }
