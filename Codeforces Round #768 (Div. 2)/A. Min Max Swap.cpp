#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n],brr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++)cin>>brr[i];
	        int maxi1=*max_element(arr,arr+n),maxi2=*max_element(brr,brr+n),ans=0;
	        int mini=INT_MIN;
	        for(int i=0;i<n;i++)
	        {
	            mini=max(mini,min(arr[i],brr[i]));
	        }
	        cout<<max(maxi1,maxi2)*mini<<endl;
	    
	}
	return 0;
}
