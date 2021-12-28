#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n],ans[n];for(int i=0;i<n;i++)cin>>arr[i];
	      map<int,int, greater<int>>liked,disliked;
	      string s;cin>>s;
	      for(int i=0;i<n;i++){
	          if(s[i]=='1')liked[arr[i]]=i;
	          else disliked[arr[i]]=i;
	      }
	      int i=n;
	      for(auto i1:liked){
	          int index=i1.second;
	          ans[index]=i;i--;
	      }
	      for(auto i1:disliked){
	          int index=i1.second;
	          ans[index]=i;i--;
	      }
	      for(int i:ans)cout<<i<<" ";
	      cout<<endl;
	      
	}
	return 0;
}
