#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,maxi=INT_MIN;cin>>n;
	    while(n){
	        maxi=max(maxi,n%10);
	        n/=10;
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
