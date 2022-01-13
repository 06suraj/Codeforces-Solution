#include<bits/stdc++.h>
using namespace std;
bool possible(long long x,int ele){
    while(x>0){
        x=x/2;
        if(x==ele)return 1;
    }
    return 0;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,flag1=0;cin>>n;
	    map<long long,int,greater<long long int>>ma;
	    long long arr[n];for(int i=0;i<n;i++){
	        cin>>arr[i];
	        ma[arr[i]]++;
	    }
	    sort(arr,arr+n);
	    for(int i=n;i>=1;i--){
	        int flag=0;
	        if(ma.find(i)==ma.end()){
	            for(int j=n-1;j>=0;j--){
	                if(arr[j]>n){
	                    if(ma[arr[j]]>0){
	                        if(possible(arr[j],i)){ma[arr[j]]--;flag=1;break;}
	                    }
	                }else{
	                    if(ma[arr[j]]>1){
	                        if(possible(arr[j],i)){ma[arr[j]]--;flag=1;break;}
	                    }
	                }
	            }
	            if(flag==0)flag1=1;
	        }
	    }
	    for(auto i:ma){
	        if(i.first>n and i.second>0)flag1=1;
	    }
	    if(flag1)cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
