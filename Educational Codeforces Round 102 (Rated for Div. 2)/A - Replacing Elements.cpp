#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d,flag=0;cin>>n>>d;int arr[n];for(int i=0;i<n;i++)
	    cin>>arr[i];
	    sort(arr,arr+n);
	    int s=arr[0]+arr[1];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>d&&s>d)
	        {
	            
	                flag=1;
	                break;
	            
	        }
	    }
	    if(flag)cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
