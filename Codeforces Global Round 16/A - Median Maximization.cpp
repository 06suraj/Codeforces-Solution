#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,s;cin>>n>>s;
	   cout<<(s/(n/2+1))<<endl;
	}
	return 0;
}
