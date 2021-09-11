#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=0;cin>>n;string s;cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='2')cnt++;
	    }
	    if(cnt==1 or cnt==2)cout<<"NO\n";
	    else {
	        cout<<"YES\n";
	        char s1[n][n];
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++)s1[i][j]='5';
	        }
	        for(int i=0;i<n;i++){
	            cnt=0;
	            for(int j=0;j<n;j++){
	                if(i==j)s1[i][j]='X';
	                else if(s[i]=='1')s1[i][j]='=',s1[j][i]='=';
	                else if(s[j]=='1')s1[i][j]='=',s1[j][i]='=';
	                else if(s[i]=='2' and s1[i][j]=='5'){
	                    if(cnt==0){
	                        s1[i][j]='+';
	                        s1[j][i]='-';
	                        cnt=1;
	                    }else s1[i][j]='-',s1[j][i]='+';
	                }
	            }
	        }
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++)cout<<s1[i][j];
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
