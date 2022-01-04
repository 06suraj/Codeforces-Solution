#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,k,temp;cin>>n>>k;
	    int i=1;
	    temp=k;
	    while(i<=n){
	        k--;
	        i=i+2;
	    }
	    if(k>0)cout<<-1<<endl;
	    else{
	        k=temp;
	        char arr[n][n];
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                if(i==j and i%2==0 and k)arr[i][j]='R',k--;
	                else arr[i][j]='.';
	            }
	        }
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                cout<<arr[i][j];
	            }
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
