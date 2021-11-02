#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];string s;cin>>s;
	    vector<int>increase,decrease;
	    for(int i=0;i<n;i++){
	        if(s[i]=='R')increase.push_back(arr[i]);
	        else decrease.push_back(arr[i]);
	    }
	    sort(increase.begin(),increase.end(),greater<int>());
	    sort(decrease.begin(),decrease.end());
	    int maxi=n,mini=1,flag=0;
	    for(int i=0;i<increase.size();i++){
	        if(increase[i]<=maxi)maxi--;
	        else flag=1;
	    }
	    for(int i=0;i<decrease.size();i++){
	        if(decrease[i]>=mini)mini++;
	        else flag=1;
	    }
	    if(flag==0)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
