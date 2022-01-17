#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[],vector<int>&ans,int src,map<pair<int,int>,int>&ma,int prime,int parent,int flag){
    // cout<<src<<" "<<prime<<endl;
   ma[{parent,src}]=prime;
    for(int child:adj[src]){
        if(child!=parent)
        {
            if(flag==0){flag=1;dfs(adj,ans,child,ma,prime,src,flag);}
            else dfs(adj,ans,child,ma,5-prime,src,flag);
        }
    }
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0,src;cin>>n;
	    vector<int>adj[n+1];
	    map<pair<int,int>,int>ma,ma1;
	    for(int i=1;i<n;i++){
	        int u,v;cin>>u>>v;
	        if(i==1){
	            src=v;
	            ma[{-1,src}]=0;
	        }
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	        ma[{u,v}]=i;
	    }
	    for(int i=1;i<=n;i++){
	            if(adj[i].size()>2)flag=1;
	    }
	    if(flag)cout<<-1<<endl;
	    else{
	        vector<int>ans(n+1,0);
	        dfs(adj,ans,src,ma1,2,-1,0);
	       // cout<<adj[3][1]<<" ";
	        for(auto i:ma1){
	            int u=(i.first).first,v=(i.first).second;
	                if(ma.find({u,v})!=ma.end())ans[ma[{u,v}]]=i.second;
	                else if(ma.find({v,u})!=ma.end())ans[ma[{v,u}]]=i.second;
	            
	        }
	        for(int i=1;i<n;i++)cout<<ans[i]<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
