#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,firstSize,secondSize,flag=0,flag1=0;cin>>n;
	    long long arr[n],firstGcd,secondGcd;for(int i=0;i<n;i++)cin>>arr[i];
	    vector<long long>first,second;
	    for(int i=0;i<n;i=i+2){
	        first.push_back(arr[i]);
	        if(i!=n-1)second.push_back(arr[i+1]);
	    }
	    firstSize=first.size();
	    secondSize=second.size();
	    if(firstSize){
	        firstGcd=first[0];
	        for(int i=1;i<firstSize;i++)firstGcd=__gcd(firstGcd,first[i]);
	        for(int i=0;i<secondSize;i++){
	            if(second[i]%firstGcd==0)flag=1;
	        }
	    }
	    if(secondSize){
	        secondGcd=second[0];
	        for(int i=1;i<secondSize;i++)secondGcd=__gcd(secondGcd,second[i]);
	        for(int i=0;i<firstSize;i++){
	            if(first[i]%secondGcd==0)flag1=1;
	        }
	    }
	    if(flag==0)cout<<firstGcd<<endl;
	    else if(flag1==0)cout<<secondGcd<<endl;
	    else cout<<0<<endl;
	    
	}
	return 0;
}
