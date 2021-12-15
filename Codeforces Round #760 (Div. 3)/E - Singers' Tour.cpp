#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;cin>>n;
	    long long b[n],s=0,req;for(int i=0;i<n;i++)cin>>b[i];
	    for(int i=0;i<n;i++)s+=b[i];
	    if(s%((n*(n+1))/2))cout<<"NO\n";
	    else{
	        req=s/((n*(n+1))/2);
	       long long int ans[n];
	        for(int i=0;i<n;i++){
	            long long int diff=b[i]-b[(n-1+i)%n]; // takes the diff of curr and previous element
	            diff=req-diff;
	            if(diff%n or diff<=0)flag=1;
	            diff=diff/n;
	            ans[i]=diff;
	        }
	        if(flag)cout<<"NO\n";
	        else {cout<<"YES\n";for(long long i:ans)cout<<i<<" ";cout<<endl;}
	       
	    }
	}
	return 0;
}
