#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int n,q;cin>>n>>q;string s;cin>>s;int vis[26]={0};int prefix[n+1];
	for(int i=0;i<=n;i++)prefix[i]=0;
	for(int i=1;i<=n;i++){
	    prefix[i]=prefix[i-1]+(s[i-1]-'a'+1);
	}
	while(q--){
	    int x,y;cin>>x>>y;
	    cout<<prefix[y]-prefix[x-1]<<endl;
	}
	
	return 0;
}
