#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;long long int arr[n],res;for(int i=0;i<n;i++)cin>>arr[i];
	    res=arr[0];
	    for(int i=1;i<n;i++){
	        res=(res&arr[i]);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
