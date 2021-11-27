#include<bits/stdc++.h>
using namespace std;
 
// lovely question hope to solve these kind of question in near future
map<int,int>ma;
int flag=0;
void dfs(vector<int>adj[],int src,int par){
  
    if(par){
        if(ma[src]<ma[par])flag=1;
    }
    for(int i:adj[src]){
        if(i!=par){
            dfs(adj,i,src);
        }
    }
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--){
	ma.clear();
	flag=0;
	int n,src;cin>>n;
	int arr[n+1],brr[n+1];for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
	    cin>>brr[i];
	    ma[brr[i]]=i;
	}
	vector<int>adj[n+1];
	int par[n+1];
	for(int i=1;i<=n;i++){
	    if(arr[i]==i)src=i;
	    else{
	        adj[arr[i]].push_back(i);
	        adj[i].push_back(arr[i]);
	        par[i]=arr[i];
	       
	    }
	}
// 	cout<<src;
	dfs(adj,src,0);
	if(flag)cout<<-1<<endl;
	else{
	   long long int ans[n+1];
	   vector<long long>dist(n+1,0);
	    for(int i=1;i<=n;i++){
	        if(brr[i]==src){
	            ans[brr[i]]=0;
	        }
	        else{
	        // dist[p1]<dist[p2]<dist[p3]....< distp[n]
	        // so dist[i]=dist[i-1]+1
	        // edge weight connecting pi to parent of pi = dist[p[i]-dist[par[p[i]
	         dist[brr[i]]=dist[brr[i-1]]+1;
	         ans[brr[i]]=dist[brr[i]]-dist[par[brr[i]]]; // assigns edge weight
	        }
	    }
	    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
	    cout<<endl;
	}}
	return 0;
}
