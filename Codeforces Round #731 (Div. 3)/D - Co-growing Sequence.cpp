#include<bits/stdc++.h>
using namespace std;
bool isKthBitSet(long long int n, int k)
{
    if (n & (1 << (k - 1)))
        return 1;
    else
        return 0;
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;long long arr[n],req;for(int i=0;i<n;i++)cin>>arr[i];
	    vector< long long>ans;
	    ans.push_back(0);
	    req=arr[0];
	    for(int i=1;i<n;i++){
	        int cnt=0;
	        long long n1=arr[i],sum=0;
	        int x;
	        if(req==0)x=0;
	        else
	         x=(int)log2(req)+1;
	        while ( x--) {
               if ((n1& 1)==0)
               {
                   //cout<<cnt<<" "<<arr[i]<<" ";
                   if(isKthBitSet(req,cnt+1)) 
                   sum+=(long long)pow(2,cnt);
               }
               cnt++;
              n1 = n1 >> 1;
              //req=req>>1;
	        }
	        req=(sum^arr[i]);
	        ans.push_back(sum);
}
//cout<<endl;
for(long long i:ans)cout<<i<<" ";
cout<<endl;
	}
	return 0;
}
