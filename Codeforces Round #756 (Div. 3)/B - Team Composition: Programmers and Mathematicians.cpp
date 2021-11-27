#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    if(a>b)swap(a,b);
	    cout<<(min(a,(a+b)/4))<<endl;
	}
	return 0;
}
