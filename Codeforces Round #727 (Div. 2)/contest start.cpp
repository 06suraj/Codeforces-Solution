#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    long long n,x,y,di;cin>>n>>x>>y;
	    di=y/x;
	    if(n<di)cout<<(n-1)*(n)/2<<endl;
	    else
	    cout<<((n-di)*di+(di-1)*(di)/2)<<endl;
	    
	    
	}
	return 0;
}
