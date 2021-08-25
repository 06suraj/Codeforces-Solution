#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;cin>>n;int arr[n];for(int i=0;i<n;i++) cin>>arr[i];
	    for( i=0;i<n/2;i++)
	    {
	        cout<<arr[i]<<" "<<arr[n-1-i]<<" ";
	    }
	    if(n%2)
	    cout<<arr[n-1-i];
	    cout<<endl;
	}
	return 0;
}
