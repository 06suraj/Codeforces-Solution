#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==1) cout<<0<<" "<<y<<endl;
        else 
        {
            cout<<x-1<<" "<<y<<endl;
        }
    }
    return 0;
}
