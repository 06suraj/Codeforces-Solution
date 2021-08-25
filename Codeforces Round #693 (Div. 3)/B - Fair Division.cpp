#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    int c=0,c1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==1)c++;
	        else c1++;
	    }
	    c1=c1%2;
	    if(c%2)cout<<"NO\n";
	    else
	    {
	        if(c1==0)
	        cout<<"YES\n";
	        else
	        {
	            if(c!=0)
	            cout<<"YES\n";
	            else cout<<"NO\n";
	        }
	    }
	}
	return 0;
}
