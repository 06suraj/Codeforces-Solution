#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    int cnt=0;
	    for(int i=0;i<s.size()-1;i++){
	        if(s[i]=='0' and s[i]!=s[i+1]){
	            cnt++;
	       }
	    }
	    if(s[s.size()-1]=='0')cnt++;
	    if(cnt>2)cout<<2<<endl;
	    else{
	        cout<<cnt<<endl;
	    }
	}
	return 0;
}
