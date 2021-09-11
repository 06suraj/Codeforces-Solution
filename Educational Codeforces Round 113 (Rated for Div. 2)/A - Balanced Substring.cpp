#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,l,r,flag=0;cin>>n;
	   string s;cin>>s;
	   if(n==1)cout<<-1<<" "<<-1<<endl;
	   else{
	   for(int i=0;i<n-1;i++){
	       if(s[i]!=s[i+1]){
	           l=i+1,r=i+2;
	           flag=1;
	           break;
	       }
	   }
	   if(flag==0)cout<<-1<<" "<<-1<<endl;
	   else cout<<l<<" "<<r<<endl;}
	}
	return 0;
}
