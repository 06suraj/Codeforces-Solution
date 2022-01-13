#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    long long int ans=*max_element(arr,arr+n)-*min_element(arr,arr+n);
	    
	    cout<<ans<<endl;
	}
	return 0;
}
