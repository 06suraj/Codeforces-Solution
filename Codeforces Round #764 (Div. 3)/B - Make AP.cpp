#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    long long a,b,c;cin>>a>>b>>c;
	    if(((a+c)%(2*b)==0 and (a+c)/(2*b)>0) or ((2*b-a)%c==0 and (2*b-a)/c>0) or ((2*b-c)%a==0 and (2*b-c)/a>0))cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
