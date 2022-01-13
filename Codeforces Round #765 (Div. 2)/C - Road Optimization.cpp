#include<bits/stdc++.h>
using namespace std;
int memo[502][502],dist[502],cost[502],n,l,k;
int solve(int pos,int k){
    if(pos>=n)return 0;
    if(memo[pos][k]!=-1)return memo[pos][k];
    int ans=1e9;
    for(int i=0;i<=k;i++){
        if(pos+i+1>n)break;
        int costs=(dist[pos+i+1]-dist[pos])*(cost[pos]);
        ans=min(ans,costs+solve(i+pos+1,k-i));
    }
    return memo[pos][k]=ans;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin>>n>>l>>k;
	memset(memo,-1,sizeof(memo));
	for(int i=0;i<n;i++)cin>>dist[i];
	dist[n]=l;
	for(int i=0;i<n;i++)cin>>cost[i];
	cout<<solve(0,k);
	
	return 0;
}
