
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,count=0,i=0;cin>>x;
        for( i=0;i<x;i=i+count) count++;
        if(i-1==x) cout<<count+1<<endl;
        else cout<<count<<endl;
    }
    return 0;
}
