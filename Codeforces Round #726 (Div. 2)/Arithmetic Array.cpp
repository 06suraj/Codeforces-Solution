#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;int arr[n],sum=0;for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++)sum+=arr[i];
	   if(sum<0)cout<<1<<endl;
	   else cout<<abs(sum-n)<<endl;
	}
	return 0;
}
