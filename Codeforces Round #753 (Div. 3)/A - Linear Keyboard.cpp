#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s,s1;cin>>s>>s1;
	    unordered_map<char,int>ma;
	    for(int i=0;i<s.size();i++)ma[s[i]]=i;
	    int ans=0;
	    for(int i=1;i<s1.size();i++)ans+=abs(ma[s1[i]]-ma[s1[i-1]]);
	    cout<<ans<<endl;
	}
	return 0;
}
