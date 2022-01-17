#include<bits/stdc++.h>
using namespace std;
int dirx[4]={0,1,-1,0};
int diry[4]={1,0,0,-1};
bool isSafe(int x,int y,int n,int m){
    if(x<=0 or y<=0 or x>n or y>m)return 0;
    return 1;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,m;cin>>n>>m;
	    queue<pair<int,int>>q;
	    vector<int>ans;
	    vector<vector<int>>vis(n+1,vector<int>(m+1,-1));
	    int min=INT_MAX;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            int dis1=abs(i-n)+abs(j-m),dis2=abs(i-n)+abs(j-1),dis3=abs(i-1)+abs(j-m),dis4=abs(i-1)+abs(j-1);
	            dis1=max(dis1,dis2);
	            dis3=max(dis3,dis4);
	            dis1=max(dis1,dis3);
	            if(dis1<min)min=dis1;
	        }
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            int dis1=abs(i-n)+abs(j-m),dis2=abs(i-n)+abs(j-1),dis3=abs(i-1)+abs(j-m),dis4=abs(i-1)+abs(j-1);
	            dis1=max(dis1,dis2);
	            dis3=max(dis3,dis4);
	            dis1=max(dis1,dis3);
	            if(dis1==min){q.push({i,j});ans.push_back(min);vis[i][j]=min;}
	        }
	    }
	    while(!q.empty()){
	        auto to=q.front();
	        q.pop();
	        int currx=to.first,curry=to.second;
	        for(int i=0;i<4;i++){
	            int newx=currx+dirx[i],newy=curry+diry[i];
	            if(isSafe(newx,newy,n,m) and vis[newx][newy]==-1){
	                ans.push_back(vis[currx][curry]+1);
	                q.push({newx,newy});
	                vis[newx][newy]=vis[currx][curry]+1;
	            }
	        }
	    }
	    for(int i:ans)cout<<i<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
