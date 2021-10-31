#include<bits/stdc++.h>
using namespace std;
long long int power(long long int n)
{
   int p =(int)log2((long double)n);
   return (long long int)pow(2, p);
}
 
long long fin(long long n){return ceill(log2((long double)n));}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	 long long  int n,k,d,s,x;cin>>n>>k;
// 	 n--;
	 d=power(k),s=fin(n);
// 	 cout<<d;
	 if(2*d<n){
	     s=fin(2*d);
	     n=n-2*d;
	     if(n%k)n=n/k+1;
	     else n=n/k;
	     cout<<s+n<<endl;
	 }else cout<<s<<endl;
	 
	  
	 
	}
	return 0;
}
