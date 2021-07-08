
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	   int n;cin>>n;long long arr[n],diff=LLONG_MAX;for(int i=0;i<n;i++)cin>>arr[i];
	   sort(arr,arr+n);for(int i=0;i<n-1;i++)diff=min(diff,arr[i+1]-arr[i]);
	   int x;
	   for(int i=n-1;i>=1;i--){
	       if(arr[i]-arr[i-1]==diff){
	           x=i;
	           break;
	       }
	       
	   }
	   cout<<arr[x-1]<<" ";
	   for(int i=x+1;i<n;i++)cout<<arr[i]<<" ";
	   for(int i=0;i<x-1;i++)cout<<arr[i]<<" ";
	   cout<<arr[x]<<endl;
	 
	}
	return 0;
}
