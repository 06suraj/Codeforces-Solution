#include<bits/stdc++.h>
using namespace std;
// SquareCube  taken from https://www.geeksforgeeks.org/count-numbers-upto-n-which-are-both-perfect-square-and-perfect-cube/
int SquareCube(long long int N)
{
 
    int cnt = 0, i = 1;
 
    while (int(pow(i, 6)) <= N) {
        ++cnt;
        ++i;
    }
 
    return cnt;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n,ans;cin>>n;
	    ans=floor(sqrtl(n))+floor(cbrtl(n))-SquareCube(n);
	    cout<<ans<<endl;
	}
	return 0;
}
