#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;long long int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    long long ans=LLONG_MIN;
	    for(int i=0;i<n-1;i++){
	        ans=max(ans,arr[i]*arr[i+1]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
