#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    string s;cin>>s;
	    map<char,int>ma;
	    for(char i:s)ma[i]++;
	    int cnt=0,ans=0,temp=0;
	    for(auto i:ma){
	        temp+=(i.second)/(2);
	        cnt+=(i.second)%(2);
	    }
	    ans+=(temp/k)*2;
	    cnt+=(temp%k)*2;
	    if(cnt>=k)ans++;
	    cout<<ans<<endl;
	    
	}
	return 0;
}
