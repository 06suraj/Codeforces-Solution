#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    long long k[n],h[n],span,tail,ans=0;for(int i=0;i<n;i++)cin>>k[i];for(int i=0;i<n;i++)cin>>h[i];
	    span=h[n-1],tail=k[n-1];
	    for(int i=n-2;i>=0;i--){
	        if(k[i]<=tail-span){
	            ans+=(span*(span+1))/2;
	            span=h[i];
	            tail=k[i];
	        }
	        else if(tail-span+1<=k[i]-h[i])continue;
	        else{
	            span=h[i]+tail-k[i];
	        }
	    }
	    ans+=(span*(span+1))/2;
	    cout<<ans<<endl;
	}
	return 0;
}
