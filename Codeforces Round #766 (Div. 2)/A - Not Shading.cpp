#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,m,r,c;cin>>n>>m>>r>>c;
	    r--,c--;
	    char arr[n][m];for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++)cin>>arr[i][j];
	    }
	    if(arr[r][c]=='B')cout<<0<<endl;
	    else {
	        int flag=0;
	        for(int j=0;j<m;j++){
	            if(arr[r][j]=='B')flag=1;
	        }
	        for(int i=0;i<n;i++){
	            if(arr[i][c]=='B')flag=1;
	        }
	        if(flag)cout<<1<<endl;
	        else{
	            for(int i=0;i<n;i++){
	                for(int j=0;j<m;j++){
	                    if(arr[i][j]=='B')flag=2;
	                }
	            }
	            if(!flag)cout<<-1<<endl;
	            else cout<<2<<endl;
	        }
	    }
	}
	return 0;
}
