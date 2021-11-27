#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    if(arr[0]!=n and arr[n-1]!=n)cout<<-1<<endl;
	    else{
	        vector<int>ans;
	        if(arr[0]==n){
	            for(int i=n-1;i>=1;i--)ans.push_back(arr[i]);
	            ans.push_back(n);
	        }else{
	            for(int i=n-2;i>=0;i--)ans.push_back(arr[i]);
	            ans.push_back(n);
	        }
	        for(int i:ans)cout<<i<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
