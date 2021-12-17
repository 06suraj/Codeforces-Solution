#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    map<int,int>ma;
	    vector<int>possible;
	    for(int i:arr){
	        if(i>n)possible.push_back(i);
	        else if(ma.find(i)!=ma.end())possible.push_back(i);
	        else ma[i]++;
	        
	    }
	    sort(possible.begin(),possible.end());
	    int j=0,ans=0,flag=0;
	    for(int i=1;i<=n;i++){
	        if(ma.find(i)==ma.end()){
	            if(j==possible.size()){flag=1;break;}
	            else{
	                int x;
	                if(possible[j]%2==0)x=possible[j]/2-1;
	                else x=possible[j]/2;
	               // if(possible[j]%2==0)cout<<x<<" ";
	                if(x>=i)ans++;
	                else {flag=1;break;}
	                j++;
	            }
	        }
	    }
	    if(flag)cout<<-1<<endl;
	    else cout<<ans<<endl;
	}
	return 0;
}
