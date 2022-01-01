#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,ans=0;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    map<int,int>ma;
	    for(int i:arr)ma[i]++;
	    for(auto i:ma){
	        if(i.first){
	            if(i.second>1 and ma.find(-1*i.first)==ma.end())ans+=2;
	            else ans++;
	        }else ans++;
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
