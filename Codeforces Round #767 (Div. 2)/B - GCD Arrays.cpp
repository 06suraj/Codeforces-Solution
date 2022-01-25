#include<bits/stdc++.h>
using namespace std;
// taken from https://www.geeksforgeeks.org/count-odd-and-even-numbers-in-a-range-from-l-to-r/#:~:text=Approach%3A%20Total%20numbers%20in%20the,even%20numbers%20%3D%20N%20%E2%80%93%20countofOdd.
int countOdd(int L, int R){
 
    int N = (R - L) / 2;
 
    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    long long l,r,k,odd=0;cin>>l>>r>>k;
	    odd=countOdd(l,r)-1;
	    if(odd<0)odd=0;
	    if(l==1 and r==1)cout<<"NO\n";
	    else if(odd<k or l==r)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
