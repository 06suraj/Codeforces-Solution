#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	  long long int a,b,c;cin>>a>>b>>c;
	  if((a+2*b+3*c)%2==0)cout<<0<<endl;
	  else cout<<1<<endl;
	}
	return 0;
}
