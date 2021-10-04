#include<bits/stdc++.h>
using namespace std;
 
// easy observation
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,x;cin>>n>>x;
	    int arr[n],brr[n];for(int i=0;i<n;i++){cin>>arr[i];brr[i]=arr[i];}
	    sort(brr,brr+n);
	    if(x<=n/2)cout<<"YES\n";
	    else{
	        int flag=0,temp=n-x;
	        for(int i=temp;i<=n-temp-1;i++){
	            if(arr[i]!=brr[i])flag=1;
	        }
	        
	        if(flag)cout<<"NO\n";
	        else cout<<"YES\n";
	    }
	    
	}
	return 0;
}
