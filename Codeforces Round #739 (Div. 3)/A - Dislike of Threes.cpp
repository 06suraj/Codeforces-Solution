#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	   int k,x=0;cin>>k;
	   for(int i=1;i<=k;i++){
	       x++;
	         for(int j=x;;j++){
	          if(j%3 and (j%10)!=3)
	          {
	              x=j;
	              break;
	          }
	      }
	   }
	   cout<<x<<endl;
	}
	return 0;
}
