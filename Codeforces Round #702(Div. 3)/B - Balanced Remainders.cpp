#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	    int rem[3]={0};
	    for(int i=0;i<n;i++)
	    {
	        rem[arr[i]%3]++;
	    }
	    int excess[3]={0};
	    int defi[3]={0};
	    for(int i=0;i<3;i++)
	    {
	        if(rem[i]>n/3)
	        excess[i]=rem[i]-n/3;
	        else if(rem[i]<n/3)
	        defi[i]=n/3-rem[i];
	    }
	    while(excess[0]!=0||excess[1]!=0||excess[2]!=0){
	     if(excess[0])
	     {
	         if(defi[1])
	         {
	             defi[1]--;
	             excess[0]--;
	             count++;
	         }else if(defi[2])
	         {
	             defi[2]--;
	             excess[0]--;
	             count=count+2;
	         }
	     }else if(excess[1])
	     {
	          if(defi[2])
	         {
	             defi[2]--;
	             excess[1]--;
	             count++;
	         }else if(defi[0])
	         {
	             defi[0]--;
	             excess[1]--;
	             count=count+2;
	         }
	     }
	     else if(excess[2])
	     {
	         if(defi[0])
	         {
	             defi[0]--;
	             excess[2]--;
	             count++;
	         }else if(defi[1])
	         {
	             defi[1]--;
	             excess[2]--;
	             count=count+2;
	         }
	     }}
	     cout<<count<<endl;
	    
	}
	return 0;
}
