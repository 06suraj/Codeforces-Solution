#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,k,flag=0;cin>>n>>k;
	 long long   int arr[n],demo[n-1];for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n-1;i++){
	        demo[i]=(pow(10,arr[i+1])-pow(10,arr[i]))/pow(10,arr[i]);
	    }
	    long long s=0,cnt=0;
	    for(int i=0;i<n-1;i++){
	        if(demo[i]+cnt>k){
	            flag=1;
	            s+=(k-cnt+1)*(pow(10,arr[i]));
	            break;
	        }
	        else{
	            cnt+=demo[i];
	            s+=demo[i]*(pow(10,arr[i]));
	        }
	    }
	   long long x=0;
	   if(!flag)x=(long long)(k-cnt+1)*(pow(10,arr[n-1]));
	   cout<<s+x<<endl;
	   
	    
	}
	return 0;
}
