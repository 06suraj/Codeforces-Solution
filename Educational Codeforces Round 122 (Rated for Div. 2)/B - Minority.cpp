#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
	    int cnt=0,cnt1=0;
	    for(char i:s){
	        if(i=='1')cnt++;
	        else cnt1++;
	    }
	    if(cnt==cnt1)cout<<cnt-1<<endl;
	    else cout<<min(cnt,cnt1)<<endl;
	}
	return 0;
}
