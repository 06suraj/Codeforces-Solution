#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,req,prev=-1,ans=0;cin>>n;
	    int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    req=*max_element(arr,arr+n);
	    for(int i=n-1;i>=0;i--){
	        if(prev==-1){
	            if(arr[i]==req)break;
	            else prev=arr[i],ans++;
	        }else{
	             if(arr[i]==req)break;
	            if(arr[i]<=prev)continue;
	            else {
	                prev=arr[i];
	                ans++;
	            }
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
