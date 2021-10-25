#include<bits/stdc++.h>
using namespace std;
long long power(int x, unsigned int y)
{
  long long  int temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    int cnt=0,cnt1=0;
	    for(int i:arr){
	        if(i==0)cnt++;
	        else if(i==1)cnt1++;
	    }
	    long long ans=(long long)power(2,cnt)*cnt1;
	    cout<<ans<<endl;
	}
	return 0;
}
