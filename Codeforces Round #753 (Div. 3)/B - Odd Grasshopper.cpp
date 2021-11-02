#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	 long long a,b;cin>>a>>b;
	 if(a%2==0 and b%2==0){
	     if(b%4==0)cout<<a<<endl;
	     else cout<<a+1<<endl;
	 }else if(a%2==0){
	     if(b%4==1)cout<<a-b<<endl;
	     else cout<<a+b+1<<endl;
	 }else if(a%2 and b%2==0){
	     if(b%4==0)cout<<a<<endl;
	     else cout<<a-1<<endl;
	 }else{
	      if(b%4==1)cout<<a+b<<endl;
	     else cout<<a-b-1<<endl;
	 }
	}
	return 0;
}
