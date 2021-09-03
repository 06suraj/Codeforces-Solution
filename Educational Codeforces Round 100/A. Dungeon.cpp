#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,c,d;cin>>a>>b>>c;
	    d=(a+b+c)/9;
	    if((a+b+c)%9==0 and a>=d and b>=d and c>=d)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
