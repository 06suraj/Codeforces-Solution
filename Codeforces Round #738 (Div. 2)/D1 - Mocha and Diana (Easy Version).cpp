#include<bits/stdc++.h>
using namespace std;
 
//EASY ONE SHOULD HAVE DONE IT
 
int findpair(int node,int parent[]){
    if(parent[node]==node)return node;
    return parent[node]=findpair(parent[node],parent);
}
 
void union1(int u,int v,int parent[],int rank[]){
    int x=findpair(u,parent);
    int y=findpair(v,parent);
    if(rank[x]>rank[y])parent[y]=x;
    else if(rank[x]<rank[y])parent[x]=y;
    else{
        parent[x]=y;
        rank[y]++;
    }
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	    int n,m,m1;cin>>n>>m>>m1;int parent[n+1],parent1[n+1],rank[n+1],rank1[n+1];
	    for(int i=1;i<=n;i++)parent[i]=i,parent1[i]=i,rank[i]=0,rank1[i]=0;
	    while(m--){
	        int x,y;cin>>x>>y;
	        union1(x,y,parent,rank);
	    }
	    while(m1--){
	        int x,y;cin>>x>>y;
	        union1(x,y,parent1,rank1);
	    }
	    vector<pair<int,int>>ans;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n;j++){
	            if((findpair(i,parent)!=findpair(j,parent)) and (findpair(i,parent1)!=findpair(j,parent1))){
	                ans.push_back({i,j});
	                union1(i,j,parent,rank);
	                union1(i,j,parent1,rank1);
	            }
	        }
	    }
	    cout<<ans.size()<<endl;
	    for(auto i:ans)cout<<i.first<<" "<<i.second<<endl;
 
	return 0;
}
