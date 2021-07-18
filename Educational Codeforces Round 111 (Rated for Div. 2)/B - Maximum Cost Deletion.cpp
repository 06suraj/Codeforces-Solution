#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;cin>>n>>a>>b;string s;cin>>s;
	    int ans=n*(a+b),o=0,z=0;
	    int prev=-1;
	    for(int i=0;i<n;i++){
	        if(prev==-1 and s[i]=='1')prev=i;
	        else{
	            if(s[i]=='1' and prev!=i-1)
	            {o++,prev=i;}
	            else if(s[i]=='1')prev=i;
	        }
	    }
	    o++;
	    if(prev==-1)cout<<max(ans,n*a+b)<<endl;else{
	    prev=-1;
	    for(int i=0;i<n;i++){
	        if(prev==-1 and s[i]=='0')prev=i;
	        else{
	            if(s[i]=='0' and prev!=i-1)
	            {z++,prev=i;}
	            else if(s[i]=='0')prev=i;
	        }
	    }
	    z++;
	    if(prev==-1)cout<<max(ans,n*a+b)<<endl;
	    else
	    cout<<max(ans,max(n*a+(o+1)*b,n*a+(z+1)*b))<<endl;}
	    //cout<<ans<<endl;}
	}
	return 0;
}
