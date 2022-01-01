#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,ans=INT_MAX;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            int curr=0;
	            for(int k=0;k<n;k++){
	                if((arr[k]-arr[i])*(j-i)!=(arr[j]-arr[i])*(k-i))curr++;
	            }
	            ans=min(ans,curr);
	        }
	       
	    }
	    cout<<(n==1?0:ans)<<endl;
	}
	return 0;
}
