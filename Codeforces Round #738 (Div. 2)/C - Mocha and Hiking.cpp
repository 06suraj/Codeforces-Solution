#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	 int n,index=-1;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	 for(int i=n-1;i>=0;i--){
	     if(arr[i]==0){
	         index=i;
	         break;
	     }
	 }
	 vector<int>ans;
	 if(index==-1){
	     ans.push_back(n+1);
	     for(int i=0;i<n;i++)ans.push_back(i+1);
	     for(auto i:ans)cout<<i<<" ";
	     cout<<endl;
	 }
	 else{
	     for(int i=1;i<=index+1;i++)ans.push_back(i);
	     ans.push_back(n+1);
	     for(int i=index+2;i<=n;i++)ans.push_back(i);
	     for(auto i:ans)cout<<i<<" ";
	     cout<<endl;
	 }
	}
	return 0;
}
