#include<bits/stdc++.h>
using namespace std;
bool isprime[1000001];
void sieve(){
    memset(isprime,1,sizeof(isprime));
    isprime[1]=0;
    isprime[0]=0;
    for(int i=2;i*i<=1e+6;i++){
        if(isprime[i]==1){
        for(int j=i*i;j<=1e+6;j=j+i){
            isprime[j]=0;
         }
        }
    }
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	sieve();
	while(t--){
	    int n,e;cin>>n>>e;
	    long long left=0,right=0,ans=0;
	    int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++){
	        if(isprime[arr[i]]){
	            left=0,right=0;
	            for(int j=i+e;j<n and arr[j]==1;j=j+e)right++;
	            for(int j=i-e;j>=0 and arr[j]==1;j=j-e)left++;
	            ans+=left+right+left*right;
	           }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
