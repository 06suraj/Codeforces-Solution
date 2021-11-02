#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    int mini=arr[0];
	    for(int i=1;i<n;i++)mini=max(mini,arr[i]-arr[i-1]);
	    cout<<mini<<endl;
	}
	return 0;
}
