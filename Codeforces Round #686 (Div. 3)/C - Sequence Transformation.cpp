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
       int n,s=0,m=INT_MAX;cin>>n;
       int arr[n],f[n+1]={0},f1[n+1]={0};for(int i=0;i<n;i++) {cin>>arr[i];}
       int i=0,j=0,prev;
       f[arr[0]]=1;
       for( i=1;i<n;i++)
       {
           if(f[arr[i]])
           {
               j=1;
               if(i+1-f[arr[i]]>1)
               f1[arr[i]]++;
               
           }else f1[arr[i]]++;
           f[arr[i]]=i+1;
           
       }
       bool v[n+1]={0};
       for( i=0;i<n;i++)
       {
           if(arr[i]!=arr[n-1]&&!v[arr[i]])
           {f1[arr[i]]++;
           v[arr[i]]=1;}
           
       }
       sort(f1,f1+n+1);
       for(int i=0;i<=n;i++)
       {
           if(f1[i]!=0)
           {
               s=f1[i];
               break;
           }
       }
       cout<<s<<endl;
       
       
       
       
  }
return 0;}
  
