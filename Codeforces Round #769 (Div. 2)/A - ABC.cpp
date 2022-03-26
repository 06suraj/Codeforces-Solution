#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=0,cnt1=0;cin>>n;
	    string s;cin>>s;
	    for(char i:s){
	        if(i=='1')cnt++;
	        else cnt1++;
	    }
	    if(cnt>=2 or cnt1>=2)cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
