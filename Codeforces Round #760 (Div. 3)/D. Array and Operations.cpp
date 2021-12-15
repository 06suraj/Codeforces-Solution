#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,ans=0,k;cin>>n>>k;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    int j=n-1,i=j-k;
	   while(k){
	       ans+=arr[i]/arr[j];
	       i--,j--,k--;
	   }
	   while(i>=0)ans+=arr[i--];
	   cout<<ans<<endl;
	}
	return 0;
}
