#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;long long int arr[n],h;cin>>h;for(int i=0;i<n;i++)cin>>arr[i];
	   long long  int lb=0,ub=h;
	    long long ans=0;
	    while(lb<=ub){
	        long long mid=lb+(ub-lb)/2;
	        long long total=0;
	        for(int i=1;i<n;i++){
	            total+=min(arr[i]-arr[i-1]-1,mid);
	        }
	        total+=n+mid;
	        if(total>=h){
	            ans=mid;
	            ub=mid-1;
	        }else lb=mid+1;
	   }
	    cout<<ans+1<<endl;
	}
	return 0;
}
