#include<bits/stdc++.h>
using namespace std;
// computeXOR taken from https://www.geeksforgeeks.org/calculate-xor-1-n/
int computeXOR(int n)
{
   
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int a,b,res=0;cin>>a>>b;
	    res=computeXOR(a-1);
	    if(res==b)cout<<a<<endl;
	    else{
	        if((res^b)==a)cout<<a+2<<endl;
	        else cout<<a+1<<endl;
	    }
	}
	return 0;
}
