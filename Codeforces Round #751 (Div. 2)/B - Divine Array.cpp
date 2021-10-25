
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=0;cin>>n;
	    int arr[n];
	    map<pair<int,int>,int>ma;
	    map<int,int>p;
	    for(int i=0;i<n;i++){cin>>arr[i];p[arr[i]]++;}
	    for(int i=0;i<n;i++)ma[{cnt,i}]=arr[i];
	    while(1){
	        int flag=0;
	        cnt++;
	        for(int i=0;i<n;i++){
	            if(arr[i]!=p[arr[i]])
	            {arr[i]=p[arr[i]];
	            flag=1;}
	            ma[{cnt,i}]=arr[i];
	        }
	        if(flag==0){cnt--;break;}
	        p.clear();
	        for(int i=0;i<n;i++)p[arr[i]]++;
	    }
	    int q;cin>>q;
	    while(q--){
	        int x,k;cin>>x>>k;x--;
	        if(ma.find({k,x})==ma.end())cout<<ma[{cnt,x}]<<endl;
	        else cout<<ma[{k,x}]<<endl;
	    }
	}
	return 0;
