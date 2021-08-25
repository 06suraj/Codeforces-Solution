#include<bits/stdc++.h>
using namespace std;
int next(int arr[], int target, int end,int start)
{
      if(start>end)return -1;
      if(end == 0) return -1;
      if (target > arr[end]) return end;
 
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid]<=target)
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    long long ans=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(i+2<n){
	        int index=next(arr, arr[i]+2, n-1,i+2);
	        if(index!=-1){
	            ans+=(long long)((index-(i+2)+1)*(long long)(index-(i+2)+2))/2;
	        }}
	        
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
