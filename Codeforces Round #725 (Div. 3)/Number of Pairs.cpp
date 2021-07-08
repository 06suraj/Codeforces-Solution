#include<bits/stdc++.h>
using namespace std;
/* countInRange taken from https://www.geeksforgeeks.org/queries-counts-array-elements-values-given-range/*/
int lowerIndex(long long int arr[], int l,int n,long long int x)
{
    int  h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] >= x)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}
 
// function to find last index <= y
int upperIndex(long long int arr[], int l,int n,long long int y)
{
    int  h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] <= y)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}
int countInRange(long long int arr[],int l, int n, long long int x, long long int y)
{
    // initialize result
    int count = 0;
    count = upperIndex(arr,l, n, y) - lowerIndex(arr,l, n, x) + 1;
    return count;
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    int n;
	   long long l,r,cnt=0;cin>>n>>l>>r;long long arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	   sort(arr,arr+n);
	   for(int i=0;i<n;i++)
	   {
	       
	           cnt+=countInRange(arr,i+1, n, l-arr[i], r-arr[i]);
	           //cnt+=countGreater(arr,i+1, n, l-arr[i]);
	       
	   }
	   cout<<cnt<<endl;
	}
	return 0;
}
