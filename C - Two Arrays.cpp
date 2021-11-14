#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;cin>>n;int arr[n],brr[n];for(int i=0;i<n;i++)cin>>arr[i];for(int i=0;i<n;i++)cin>>brr[i];
	    sort(arr,arr+n);
	    sort(brr,brr+n);
	    for(int i=0;i<n;i++){
	        if(brr[i]-arr[i]!=0 and brr[i]-arr[i]!=1)flag=1;
	    }
	    if(flag==0)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
