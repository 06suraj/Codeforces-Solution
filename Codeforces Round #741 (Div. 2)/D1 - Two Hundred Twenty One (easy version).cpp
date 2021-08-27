#include<bits/stdc++.h>
using namespace std;
 
// just a guesswork
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	   int n,q;cin>>n>>q;string s;cin>>s;int arr[n],prefix[n];
	   for(int i=0;i<n;i++){
	       if(s[i]=='+')arr[i]=1;
	       else arr[i]=-1;
	       if(i%2)arr[i]=-1*arr[i];
	   }
	   prefix[0]=arr[0];
	   for(int i=1;i<n;i++)prefix[i]=prefix[i-1]+arr[i];
	   while(q--){
	       int x,y,s=0;cin>>x>>y;
	       x--,y--;
	       if(x)s=prefix[y]-prefix[x-1];
	       else s=prefix[y];
	       if(s==0)cout<<0<<endl;
	       else if((y-x+1)%2)cout<<1<<endl;
	       else cout<<2<<endl;
	   }
	}
	return 0;
}
