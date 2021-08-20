#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=0;cin>>n;long long arr[n],prefix[n];for(int i=0;i<n;i++)cin>>arr[i];
	    pair<long long ,int>pairt[n];
	    for(int i=0;i<n;i++)pairt[i].first=arr[i],pairt[i].second=i;
	    sort(pairt,pairt+n);
	   vector<int>index;
	   index.push_back(pairt[n-1].second);
	    
	    prefix[0]=pairt[0].first;
	    for(int i=1;i<n;i++)prefix[i]=prefix[i-1]+pairt[i].first;
	    for(int i=n-2;i>=0;i--){
	        if(prefix[i]<pairt[i+1].first){
	            break;
	        }
	        else index.push_back(pairt[i].second);
	    }
	    sort(index.begin(),index.end());
	    cout<<index.size()<<endl;
	    for(int i:index)cout<<i+1<<" ";
	    cout<<endl;
	 }
	return 0;
}
