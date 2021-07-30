#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    /* two observation was needed to solve the question :
	    1. what can be  the maximum OR value of any pair , i.e 2*n-1 as a[i]<=n and in maximum bitwise or is possible when all bits are set
	    2. range for searching pair , i.e n(worst case) to n-200(best case) [ can be found by expanding the equations  and considering (n ,n-1 , max.OR) as worst scenario and (n,n-200,min_OR i.e.1) as best scenario
	    REST IS JUST SEARCHING IN BRUTE FORCE MANNER*/
	    
	   int n,k;cin>>n>>k; long long int arr[n],ans=LLONG_MIN;for(int i=0;i<n;i++)cin>>arr[i];
	   for(int i=n-1;i>=max(0,n-200);i--){
	       for(int j=i-1;j>=max(0,n-200);j--)ans=max(ans,(long long)(i+1)*(j+1)-k*(arr[i]|arr[j]));
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
