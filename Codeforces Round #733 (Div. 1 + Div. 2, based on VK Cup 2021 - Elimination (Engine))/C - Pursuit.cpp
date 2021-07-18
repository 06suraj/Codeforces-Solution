#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n],brr[n],diff=0,cnt=0;for(int i=0;i<n;i++)cin>>arr[i];for(int i=0;i<n;i++)cin>>brr[i];
	    sort(arr,arr+n,greater<int>());
	    sort(brr,brr+n,greater<int>());
	    for(int i=0;i<(n-n/4);i++)diff+=(brr[i]-arr[i]);
	    //cout<<diff;
	    int i=(n-n/4)-1;
	    int j=(n-n/4),x=n;
	    while(diff>0){
	        if((x+1)%4){
	            if(j<n){
	                diff-=(100-brr[j]);
	                j++,cnt++,x++;
	            }else{
	                diff-=100;
	                cnt++,x++;
	            }
	        }else{
	            if(i>=0){
	                diff-=(100-arr[i]);
	                i--;
	                cnt++,x++;
	            }else cnt++,x++;
	        }
	    }
	        
	       
	    cout<<cnt<<endl;
	}
	return 0;
}
