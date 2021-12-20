#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    int n=s.size();
	    int flag=0,flag1=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='E')flag++;
	        else flag1++;
	    }
	    if(flag1==1)cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
