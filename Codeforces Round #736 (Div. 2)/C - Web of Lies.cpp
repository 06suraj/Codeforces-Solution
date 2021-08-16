#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
 
	  int n,m,ans=0,q;cin>>n>>m;int f[n+1];memset(f,0,sizeof(f));
	  for(int i=1;i<=m;i++){
	      int x,y;cin>>x>>y;
	      if(y>x)f[x]++;
	      else f[y]++;
	  }
	  for(int i=1;i<=n;i++){
	      if(f[i]==0)ans++;
	  }
	  cin>>q;
	  while(q--){
	      int x,y,z;cin>>x;
	      if(x==3)cout<<ans<<endl;
	      else{
	          cin>>y>>z;
	          if(x==1){
	              if(z>y){
	                  if(f[y]==0){ans--,f[y]++;}
	                  else f[y]++;
	              }else{
	                  if(f[z]==0){ans--,f[z]++;}
	                  else f[z]++;
	              }
	          }else{
	              if(z>y){
	                  f[y]--;
	                  if(f[y]==0)ans++;
	              }
	              else {
	                  f[z]--;
	                  if(f[z]==0)ans++;
	              }
	              
	          }
	      }
	  }
	  
	return 0;
}
