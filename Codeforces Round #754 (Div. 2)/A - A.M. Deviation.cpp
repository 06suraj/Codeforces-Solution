#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    long long a,b,c;cin>>a>>b>>c;
	    if((a+b+c)%3)cout<<1<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}
