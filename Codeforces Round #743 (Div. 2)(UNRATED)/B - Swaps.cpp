#include<bits/stdc++.h>
using namespace std;
 
// O(N) short and elegant solution
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,x;cin>>n;int m[2*n+1],m1[2*n+1];
	   memset(m,0,sizeof(m));
	   memset(m1,0,sizeof(m));
	   for(int i=0;i<n;i++){cin>>x;m[x]=i;}
	   for(int i=0;i<n;i++){cin>>x;m1[x]=i;}
	   int maxi=m1[2*n];
	   for(int i=2*n-2;i>=2;i=i-2){
	       if(m1[i]<maxi){
	           maxi=m1[i];
	       }else m1[i]=maxi;
	   }
	   int ans=INT_MAX;
	   for(int i=1;i<=2*n-1;i=i+2)ans=min(ans,m[i]+m1[i+1]);
	   cout<<ans<<endl;
	 }
	return 0;
}
