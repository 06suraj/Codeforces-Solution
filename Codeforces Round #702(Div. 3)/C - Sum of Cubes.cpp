#include<bits/stdc++.h>
using namespace std;
/*perfectCube function taken from https://www.geeksforgeeks.org/c-program-to-check-whether-a-number-is-a-perfect-cube-or-not/*/
bool perfectCube(long long int N) 
{ 
    long long int cube_root; 
    cube_root = (int)round(pow(N, 1.0 / 3.0)); 
  
    // If cube of cube_root is equals 
    // to N, then print Yes else No 
    if (cube_root * cube_root * cube_root == N) { 
       return 1;
    } 
    else { 
        return 0;
    } 
} 
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int flag=0;
	     long long x;cin>>x;
	    long long temp=cbrt(x);
	    long long b=1;
	    while(b<=temp)
	    {
	       
	        long long  cube=(x-b*b*b);
	         
	        
	       if (perfectCube(cube)&&cube)
	       {
	           flag=1;
	           break;
	       }
	       b++;
	    }
	    if(flag)cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}
	return 0;
}
