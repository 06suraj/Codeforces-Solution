#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int ans=2;
	    for(int i=1;i<=n;i++){
	        cout<<ans<<" ";
	        ans++;
	    }
	    cout<<endl;
	}
	return 0;
}
