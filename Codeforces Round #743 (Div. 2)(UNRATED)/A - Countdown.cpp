#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s;cin>>s;
	    int ans=0;
	    if(s[s.size()-1]-'0')ans+=s[s.size()-1]-'0';
	    for(int i=s.size()-2;i>=0;i--){
	        if(s[i]-'0')ans+=1+s[i]-'0';
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
