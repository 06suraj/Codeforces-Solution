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
	    int r[101]={0};
	    for(int i=0;i<n;i++)
	    r[arr[i]]++;
	    cout<<*max_element(r,r+101)<<endl;
	}
	return 0;
}
