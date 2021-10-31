#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int cnt=0,cnt1=0;string s;cin>>s;
	    for(int i=0;i<s.size()-1;i++){
	        if(s[i]=='a' and s[i+1]=='b')cnt++;
	        else if(s[i]=='b' and s[i+1]=='a')cnt1++;
	    }
	    if(cnt==cnt1)cout<<s<<endl;
	    else if(cnt>cnt1){
	        if(s[s.size()-1]=='a')s[s.size()-1]='b';
	        else s[0]='b';
	        cout<<s<<endl;
	   }
	   else{
	       if(s[s.size()-1]=='b')s[s.size()-1]='a';
	       else s[0]='a';
	       cout<<s<<endl;
	   }
	}
	return 0;
}
