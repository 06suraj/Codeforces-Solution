#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    if(n%2==0){
	        cout<<n-3<<" "<<2<<" "<<1<<endl;
	    }else{
	        int x=4;
	        if(n%4==1)cout<<n/2-1<<" "<<n/2+1<<" "<<1<<endl;
	        else cout<<n/2-2<<" "<<n/2+2<<" "<<1<<endl;
	        
	    }
	}
	return 0;
}
