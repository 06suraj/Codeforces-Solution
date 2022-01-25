#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    pair<int,int>pairt[n];for(int i=0;i<n;i++)cin>>pairt[i].first;
	    for(int i=0;i<n;i++)cin>>pairt[i].second;
	    sort(pairt,pairt+n);
	    for(int i=0;i<n;i++){
	        if(k<pairt[i].first)break;
	        else k+=pairt[i].second;
	    }
	    cout<<k<<endl;
	}
	return 0;
}
