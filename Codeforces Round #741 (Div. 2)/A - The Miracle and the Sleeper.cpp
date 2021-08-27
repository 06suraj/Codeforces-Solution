#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    if(b/2<a)cout<<b-a<<endl;
	   else{
	       if(b%2)cout<<b/2<<endl;
	       else cout<<b/2-1<<endl;
	   }
	}
	return 0;
}
