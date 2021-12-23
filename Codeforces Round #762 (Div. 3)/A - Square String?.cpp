#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    if(s.size()%2)cout<<"NO\n";
	    else{
	        int i=0,j=s.size()/2,flag=0;
	        while(j<s.size()){
	            if(s[i]!=s[j])flag=1;
	            i++,j++;
	        }
	        if(flag)cout<<"NO\n";
	        else cout<<"YES\n";
	    }
	}
	return 0;
}
