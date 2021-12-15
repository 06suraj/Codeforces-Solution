#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int arr[7];for(int i=0;i<7;i++)cin>>arr[i];
	    sort(arr,arr+7);
	    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6]-arr[0]-arr[1]<<endl;
	}
	return 0;
}
