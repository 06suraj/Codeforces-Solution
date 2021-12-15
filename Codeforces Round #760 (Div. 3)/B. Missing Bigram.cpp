#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;cin>>n;
	    string s[n-2];
	    for(int i=0;i<n-2;i++)cin>>s[i];
	    string ans="";
	    ans+=s[0][0];
	   // cout<<s[0]<<" "<<s[n-3];
	    for(int i=1;i<n-2;i++){
	        if(s[i][0]!=s[i-1][1]){
	           ans+=s[i-1][1];
	           ans+=s[i][0];
	           //cout<<s[i-1][1]+s[i][0]<<endl;
	           flag=1;
	        }else
	        ans+=s[i-1][1];
	    }
	    if(flag)
	    ans+=s[n-3][1];
	    else {
	         ans+=s[n-3][1];
	          ans+=s[n-3][1];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
