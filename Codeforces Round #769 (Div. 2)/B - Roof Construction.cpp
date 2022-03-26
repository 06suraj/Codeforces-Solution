#include<bits/stdc++.h>
using namespace std;

// highestPowerof2 taken from https://www.geeksforgeeks.org/highest-power-2-less-equal-given-number/
int highestPowerof2(int n)
{
   int p = (int)log2(n);
   return (int)pow(2, p);
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int high=highestPowerof2(n);
	    if(ceil(log2(n))==floor(log2(n)))high=high/2;
	    for(int i=1;i<high;i++)cout<<i<<" ";
	    cout<<0<<" ";
	    for(int i=high;i<n;i++)cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
