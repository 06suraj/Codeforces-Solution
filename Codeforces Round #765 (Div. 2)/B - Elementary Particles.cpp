#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,ans=-1,len=INT_MAX;cin>>n;
	    map<int,int>ma;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        if(ma.find(x)!=ma.end())len=min(len,i-ma[x]);
	        ma[x]=i;
	    }
	    if(len==INT_MAX)cout<<-1<<endl;
	    else
	    cout<<n-len<<endl;
	    
	}
	return 0;
}
