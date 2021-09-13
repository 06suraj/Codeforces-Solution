#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,m,size,cnt=0;cin>>n>>m;size=n*m;int arr[size],brr[size];for(int i=0;i<size;i++){cin>>arr[i];brr[i]=arr[i];}
	    unordered_map<int,int>ma,f,vis;for(int i=0;i<size;i++)f[arr[i]]=0,vis[arr[i]]=0;
	    sort(brr,brr+n*m);
	    for(int i=0;i<size;i++){
	        if(ma.find(brr[i])==ma.end())ma[brr[i]]=i;
	    }
	    
	    for(int i=0;i<size;i++){
	        vis[ma[arr[i]]+f[arr[i]]]=arr[i];
	       // cout<<vis[0]<<" "<<vis[1]<<endl;
	        int row=(ma[arr[i]]+f[arr[i]])/m,col=(ma[arr[i]]+f[arr[i]])%m;
	       // cout<<row<<" "<<col<<endl;
	        if(col){
	        for(int j=row*m;j<ma[arr[i]];j++){
	            if(vis[j]<arr[i] and vis[j]!=0)cnt++;
	        }}
	        f[arr[i]]++;
	   }
	   //for(int i=0;i<n*m;i++){
	   //   cout<<vis[i]<<" ";
	   //    //cout<<endl;
	   //}
	   cout<<cnt<<endl;
}
	return 0;
}
