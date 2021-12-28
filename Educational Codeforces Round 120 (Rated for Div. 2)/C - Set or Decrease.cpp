#include<bits/stdc++.h>
using namespace std;
long long ceil_div(long long a, long long b) {return a % b == 0 ? a / b : a / b + 1;}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	   int n;cin>>n;
	   long long arr[n+1],k,s=0;cin>>k;for(int i=1;i<=n;i++){cin>>arr[i];s+=arr[i];}
	   sort(arr+1,arr+n+1);
	   if(s<=k)cout<<0<<"\n";
	   else if(s==k+1)cout<<1<<"\n";
	   else{
	       long long diff=s-k,ans=s-k;
	       s=0;
	       for(int i=n;i>1;i--){
	           s+=arr[i];
	           long long x;
	           if(s-(n-i+1)*arr[1]>=diff)x=0;
	           else {
	               x=max(ceil_div(diff-s+(n-i+1)*arr[1],n-i+2),(long long)0);
	           }
	           ans=min(ans,x+n-i+1);
	       }
	       cout<<ans<<endl;
	   }
	   
	}
	return 0;
}
