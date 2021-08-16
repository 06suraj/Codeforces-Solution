#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;long double arr[n],s=0;for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++)s+=arr[i];
	    s=s/(n-1)+arr[n-1];
	    cout<<setprecision(9)<<s<<endl;
	}
	return 0;
}
