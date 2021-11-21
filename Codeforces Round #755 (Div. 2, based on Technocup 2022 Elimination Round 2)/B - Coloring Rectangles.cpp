#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int x,y,ans,dir;cin>>x>>y;
 
	   dir=(y%3?y/3+1:y/3);
	    ans=dir*x;
	    dir=(x%3?x/3+1:x/3);
	    ans=min(ans,dir*y);
	    if((x*y)%3)ans=min(ans,((x*y)/3+1));
	    else ans=min(ans,(x*y)/3);
	    cout<<ans<<endl;
	}
	return 0;
}
