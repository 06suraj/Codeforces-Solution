#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   /* #ifndef ONLINE_JUDGE                                
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout); 
   #endif*/
  int t;cin>>t;
  while(t--)
  {
       int n;cin>>n;
       int arr[n];for(int i=0;i<n;i++) cin>>arr[i];
       pair<int,int>pairt[n];
       for(int i=0;i<n;i++)
       {
            pairt[i].first=arr[i];
            pairt[i].second=i;
       }
       sort(pairt,pairt+n);
       int flag=0;
       int i=0,j=1,ans=-1;
       if(pairt[i].first!=pairt[i+1].first) cout<<pairt[i].second+1<<endl;
       else
       {
            for(j=2;j<n-1;j++) 
            {
                 if(pairt[j].first!=pairt[j-1].first&&pairt[j].first!=pairt[j+1].first)
                 {
                      ans=pairt[j].second+1;
                      break;
                 }
                 
            }
           if(pairt[j].first!=pairt[j-1].first)
           ans=pairt[j].second+1;
            cout<<ans<<endl;
       }
       
       
       
  }
return 0;}
  
