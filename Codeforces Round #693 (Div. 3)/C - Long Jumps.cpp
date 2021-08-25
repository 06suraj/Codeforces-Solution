
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;long long arr[n],m[n],s[n]={0};for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++)
	    {
	        s[i]=max(s[i],arr[i]);
	        if(i+arr[i]<n)
	        s[i+arr[i]]=max(s[i]+arr[i+arr[i]],s[i+arr[i]]);
	    }
	    cout<<*max_element(s,s+n)<<endl;
	}
	return 0;
}
