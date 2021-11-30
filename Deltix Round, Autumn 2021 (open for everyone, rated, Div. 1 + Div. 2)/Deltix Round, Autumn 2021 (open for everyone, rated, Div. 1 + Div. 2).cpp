#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	  int n;cin>>n;vector<long long int>arr(n);
	  long long ans=0;
	  for(int i=0;i<n;i++){cin>>arr[i];ans+=arr[i];}
	  for(int i=0;i<n;i++){
	    long long  int s=0,cnt=0;
	      vector<long long int>temp=arr;
	      for(int j=0;j<n;j++){
	          if(j!=i){
	              while(temp[j]%2==0){
	                  temp[j]/=2;
	                  cnt++;
	              }
	          }
	      }
	      while(cnt){
	          temp[i]=temp[i]*2;
	          cnt--;
	      }
	      for(int j=0;j<n;j++)s+=temp[j];
	      ans=max(ans,s);
	  }
	  cout<<ans<<endl;
	  
	}
	return 0;
}
