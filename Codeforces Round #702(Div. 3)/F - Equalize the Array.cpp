#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,first;cin>>n;long long arr[n],prefix[n],suffix[n],prev,ans=LLONG_MAX;for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    map<long long ,long long>ma;
	    for(int i=0;i<n;i++)ma[arr[i]]++;
	    vector<long long>index;
	    for(auto i=ma.begin();i!=ma.end();i++)
	    index.push_back(i->second);
	    sort(index.begin(),index.end());
	    prefix[0]=index[0];
	    for(int i=1;i<index.size();i++)prefix[i]=prefix[i-1]+index[i];
	    suffix[index.size()-1]=index[index.size()-1];
	    for(int i=(index.size()>=2?index.size()-2:0);i>=0;i--)suffix[i]=suffix[i+1]+index[i];
	    for(int i=0;i<index.size();i++){
	        long long s1=0,s2=0;
	        int l=lower_bound(index.begin() ,index.end(), index[i]) - index.begin();
	        int r=upper_bound(index.begin() ,index.end(), index[i]) - index.begin()-1;
	       if(l)s1=prefix[l-1];
	       if(r!=index.size()-1)s2=(suffix[r+1])-(index[i])*(index.size()-r-1);
	       ans=min(ans,s1+s2);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
