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
	   string ans="";
	   for(int i=0;i<s.size();i++){
	       if(s[i]=='U')ans+='D';
	       else if(s[i]=='D')ans+='U';
	       else ans+=s[i];
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
