#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    long long minLeft=1e10,costL=0;
	    long long maxRight=0,costR=0;
	    long long maxLen=0,costLen=0;
	    map<pair<long long int,long long int>,long long int>ma;
	    map<long long,long long>ma1;
	    while(n--){
	        long long l,r,c;cin>>l>>r>>c;
	        if(l<minLeft)minLeft=l,costL=c;
	        else if(l==minLeft)costL=min(c,costL);
	        if(maxRight<r)maxRight=r,costR=c;
	        else if(maxRight==r)costR=min(costR,c);
	        if(maxLen<r-l+1)maxLen=r-l+1,costLen=c;
	        if(maxLen==r-l+1)costLen=min(costLen,c);
	        long long ans=costL+costR;
	        if(maxLen==maxRight-minLeft+1)ans=min(ans,costLen);
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
