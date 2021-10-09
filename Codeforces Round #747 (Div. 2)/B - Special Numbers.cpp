#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
 
// EASY PIZI
 
long long int count(int n,int cnt){
   long long int ans=1;
    while(cnt){
        ans=((ans%mod)*(n%mod))%mod;
        cnt--;
    }
    return ans;
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,k,cnt=0,ans=0;
	    cin>>n>>k;
	    while(k){
	        if(k&1){
	           long long int  temp=count(n,cnt);
	            ans=(ans+temp%mod)%mod;
	        }
	        k >>= 1;
	        cnt++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
