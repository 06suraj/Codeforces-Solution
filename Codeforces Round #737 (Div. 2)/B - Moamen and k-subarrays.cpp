#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,k,flag=0;cin>>n>>k;
	    long long arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    map<long long,int>ma;
	    for(int i=0;i<n;i++)ma[arr[i]]=i;
	    int prev=ma.begin()->second;
	    k--;
	    for(auto i=ma.begin();i!=ma.end();i++){
	        if(i!=ma.begin()){
	            if(i->second!=prev+1)
	            {
	                if(k)k--;
	                else flag=1;
	                prev=i->second;
	            }else prev=i->second;
	        }
	    }
	    if(flag)cout<<"NO\n";
	    else cout<<"YES\n";
	    
	}
	return 0;
}
