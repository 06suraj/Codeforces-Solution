#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    set<int>s;int a,b,total,s1,f;cin>>a>>b;total=a+b,f=(a+b)/2,s1=total-f;
	    
	   // case 1: B A B A B A B A
	   for(int i=0;i<=min(a,f);i++){
	       // i denotes the number of wins when A serves
	       if(a-i<=s1){
	           s.insert(a-i+f-i);
	       }
	   }
	   
	   // case 2: A B A B A B 
	   for(int i=0;i<=min(a,s1);i++){
	       // i denotes the number of wins when A serves
	       if(a-i<=f){
	           s.insert(a-i+s1-i);
	       }
	   }
	   cout<<s.size()<<endl;
	   for(int i:s)cout<<i<<" ";
	   cout<<endl;
	   
	}
	return 0;
}
