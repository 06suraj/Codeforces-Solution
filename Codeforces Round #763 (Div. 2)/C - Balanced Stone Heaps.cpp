#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>arr,int limit){
    vector<int>brr(arr.size(),0);
    for(int i=arr.size()-1;i>=2;i--){
        if(arr[i]+brr[i]-limit<0)return false;
        int mini=min(arr[i],arr[i]+brr[i]-limit);
        brr[i-1]+=(mini/3);
        brr[i-2]+=2*(mini/3);
    }
    if(arr[0]+brr[0]>=limit and arr[1]+brr[1]>=limit)return true;
    return false;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i];
	    int lb=*min_element(arr.begin(),arr.end()),ub=*max_element(arr.begin(),arr.end()),ans=0;
	    while(lb<=ub){
	        int mid=lb+(ub-lb)/2;
	        if(possible(arr,mid)){
	            ans=mid;
	            lb=mid+1;
	        }else ub=mid-1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
