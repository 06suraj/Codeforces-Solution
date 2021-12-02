#include<bits/stdc++.h>
using namespace std;
// if a free cell which is adjacent to lab cell is surrounded by atmost 1 free cell then that cell will be a good cell (i.e from this cell we can reach to lab cell) abd in general if a free cell is surrounded by atmost 1 not-good free cell(i.e. a free cell which is not a good one , otherwise if it is a good one then we can simply move to that cell)

int dirx[4]={0,1,-1,0};
int diry[4]={1,0,0,-1};

bool isSafe(int x,int y,int n,int m){
    if(x<0 or x>=n or y<0 or y>=m)return 0;
    return 1;
}

void dfs(vector<string>&grid,vector<vector<int>>&vis,int srcx,int srcy){
    int curr_x,curr_y,cnt=0;
    
    for(int i=0;i<=3;i++){
        curr_x=srcx+dirx[i],curr_y=srcy+diry[i];
        if(isSafe(curr_x,curr_y,grid.size(),grid[0].size())){
            if(!vis[curr_x][curr_y] and grid[curr_x][curr_y]!='#')cnt++;
        }
    }
    // cout<<srcx<<" "<<srcy<<" "<<cnt<<endl;
    if(cnt<=1){
        // cout<<srcx<<" "<<srcy<<endl;
        vis[srcx][srcy]=1;
        grid[srcx][srcy]='+';
        for(int i=0;i<=3;i++){
            curr_x=srcx+dirx[i],curr_y=srcy+diry[i];
	        if(isSafe(curr_x,curr_y,grid.size(),grid[0].size()) and !vis[curr_x][curr_y] and grid[curr_x][curr_y]!='#'){
	            dfs(grid,vis,curr_x,curr_y);
	        }
        }
    }
}
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,m,srcx,srcy;cin>>n>>m;
	    vector<string>grid;
	    string s;
	    for(int i=0;i<n;i++){
	        cin>>s;
	        grid.push_back(s);
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]=='L')srcx=i,srcy=j;
	        }
	    }
	    vector<vector<int>>vis(n,vector<int>(m,0));
	    vis[srcx][srcy]=1;
	    for(int i=0;i<=3;i++){
	        int curx=srcx+dirx[i],cury=srcy+diry[i];
	        if(isSafe(curx,cury,n,m) and !vis[curx][cury] and grid[curx][cury]!='#'){
	            dfs(grid,vis,curx,cury);
	        }
	    }
	   for(string s:grid)cout<<s<<"\n";
	 }
	return 0;
}
