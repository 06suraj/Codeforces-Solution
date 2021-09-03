#include<bits/stdc++.h>
using namespace std;
//  BITMASKING TAG IS ENOUGH TO SOLVE THIS QUESTION
int upper(int num){
    return pow(2,ceil(log2(num)));
}
 
int low(int num){
    return pow(2,floor(log2(num)));
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    vector<int>ans;
	    for(int i=0;i<n;i++){
	        int greater=upper(arr[i]),lower=low(arr[i]);
	       if(abs(arr[i]-lower)<abs(arr[i]-greater) or greater>1000000000)
	       ans.push_back(lower);
	       else ans.push_back(greater);
	    }
	    for(int i:ans)cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
