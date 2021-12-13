#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,k,posSize,negSize,flag=0;cin>>n>>k;
	    long long s=0,s1=0,ans=0;
	    vector<long long>pos,neg;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        if(x<0)neg.push_back(x);
	        else if(x>0)pos.push_back(x);
	    }
	    sort(pos.begin(),pos.end(),greater<int>());
	    sort(neg.begin(),neg.end());
	    posSize=pos.size(),negSize=neg.size();
	    for(int i=0;i<=posSize-posSize%k-1;i=i+k){
	        if(i==0)s+=pos[i];
	        else s+=2*pos[i];
	        flag=1;
	    }
	   if(posSize and posSize%k)s+=(flag?2*pos[posSize-posSize%k]:pos[posSize-posSize%k]);
	   flag=0;
	    
	    for(int i=0;i<=negSize-negSize%k-1;i=i+k){
	        if(i==0)s1+=abs(neg[i]);
	        else s1+=2*abs(neg[i]);
	        flag=1;
	    }
	   if(negSize and negSize%k)s1+=(flag?2*abs(neg[negSize-negSize%k]):abs(neg[negSize-negSize%k]));
	   ans=s+s1;
	   if(posSize and negSize)ans+=min(pos[0],abs(neg[0]));
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
