#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,x=0,x1=0;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    while(1){
	         int flag=0;
	      for(int j=0;j<n-1;j++){
	            if(arr[j]>arr[j+1])flag=1;
	        }
	        if(flag==0)break;
	        int i;
	        if(x1%2==0)i=0;
	        else i=1;
	        for(int j=i;j<n-1;j=j+2){
	            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
	        }
	        x1++;
	        x++;
	        if(flag==0)break;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
