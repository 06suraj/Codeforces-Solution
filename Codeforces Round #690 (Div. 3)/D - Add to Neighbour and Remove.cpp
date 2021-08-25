#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	   int n,ans=INT_MAX;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	   int s=0,s1=0;
	   for(int i=0;i<n;i++){
	       s+=arr[i];
	       s1=0;
	       int cnt=1;
	       for(int j=i+1;j<n;j++){
	           s1+=arr[j];
	           if(s1==s)s1=0,cnt++;
	       }
	       if(s1!=0)cnt=1;
	       ans=min(ans,n-cnt);
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
