#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int l1,l2,l3;cin>>l1>>l2>>l3;
	    if(l1==l2){
	        if(l3%2)cout<<"NO\n";
	        else cout<<"YES\n";
	    }else if(l2==l3){
	        if(l1%2)cout<<"NO\n";
	        else cout<<"YES\n";
	    }else if(l1==l3){
	        if(l2%2)cout<<"NO\n";
	        else cout<<"YES\n";
	    }else{
	        if(l1+l2==l3 or l2+l3==l1 or l1+l3==l2)cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	}
	return 0;
}
