#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	    int n;cin>>n;unsigned long long k,x;cin>>k>>x;unsigned long long arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    vector<unsigned long long >v;
	    for(int i=0;i<n-1;i++){
	        unsigned long long d=arr[i+1]-arr[i];
	        if(d>x){
	            if(d%x)v.push_back(d/x);
	            else v.push_back(d/x-1);
	        }
	    }
	    if(v.size()==0)cout<<1<<endl;
	    else{
	        sort(v.begin(),v.end());
	        unsigned long long sum=0;
	        int cnt=0;
	        for(int i=0;i<v.size();i++){
	            sum+=v[i];
	            if(sum>k)
	            break;
	            cnt++;
	        }
	        cout<<(v.size()-cnt+1)<<endl;
	    }
	return 0;
}
