#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	   int n,m,cnt=0;cin>>n>>m;
	   int arr[m];for(int i=0;i<m;i++)cin>>arr[i];
	   for(int i=0;i<m;i++){
	       for(int j=i-1;j>=0;j--){
	           if(arr[i]>arr[j])cnt++;
	       }
	   }
	   cout<<cnt<<endl;
	}
	return 0;
}
