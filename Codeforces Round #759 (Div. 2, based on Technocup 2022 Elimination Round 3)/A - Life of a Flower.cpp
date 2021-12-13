#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n],ans=1;
	    for(int i=0;i<n;i++)cin>>arr[i];
	    if(arr[0])ans++;
	    for(int i=1;i<n;i++){
	        if(arr[i] and arr[i-1])ans+=5;
	        else if(arr[i] and arr[i-1]==0)ans++;
	        else if(arr[i]==0 and arr[i-1])continue;
	        else {
	            ans=-1;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
