#include<bits/stdc++.h>
using namespace std;
// GOOD ONE

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	   int n;cin>>n;int arr[n],prefix[32]={0};for(int i=0;i<n;i++)cin>>arr[i];
	   for(int i=0;i<n;i++){
	       int x=arr[i],cnt=0;
	       while(x){
	           if((x&1)==1)prefix[cnt]++;
	           x=x>>1;
	           cnt++;
	       }
	   }
	   for(int i=1;i<=n;i++){
	   {
	       int flag=0;
	       for(int j=0;j<=31;j++){
	           if(prefix[j]%i)flag=1;
	       }
	       if(flag==0)cout<<i<<" ";
	   }
	  
	  }
	   cout<<endl;
	}
	return 0;
}
