#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,h,rem,ans;cin>>n>>h;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n,greater<int>());
	    rem=h%(arr[0]+arr[1]);
	    ans=(h/(arr[0]+arr[1]))*2;
	    if(rem<=arr[0] and rem)ans++;
	    else if(rem) ans+=2;
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
