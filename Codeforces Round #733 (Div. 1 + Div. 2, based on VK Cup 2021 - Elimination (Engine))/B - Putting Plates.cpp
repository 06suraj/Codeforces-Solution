#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,m;cin>>n>>m;
	    string s[n];
	    string temp(m,'0');
	    for(int i=0;i<n;i++)s[i]=temp;
	    for(int i=0;i<m;i=i+2)s[0][i]='1';
	    for(int i=0;i<m;i=i+2)s[n-1][i]='1';
	    for(int i=2;i<n-2;i=i+2)s[i][0]='1',s[i][m-1]='1';
	    for(int i=0;i<n;i++)cout<<s[i]<<endl;
	    cout<<endl;
	}
	return 0;
}
