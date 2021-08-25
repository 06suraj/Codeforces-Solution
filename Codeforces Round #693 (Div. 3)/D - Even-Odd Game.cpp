#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;long long arr[n],s=0,s1=0;for(int i=0;i<n;i++)cin>>arr[i];
	    vector<long long>even,odd;for(int i=0;i<n;i++){
	        if(arr[i]%2)odd.push_back(arr[i]);
	        else even.push_back(arr[i]);
	    }
	    sort(even.begin(),even.end(),greater<long long int>());sort(odd.begin(),odd.end(),greater<long long>());
	    int i=0,j=0,k=1;
	    while(i<even.size() and j<odd.size() and k<=n){
	        if(k%2){
	            if(even[i]>odd[j]){
	                s=s+even[i];
	                i++,k++;
	            }else if(even[i]<odd[j]){
	                j++,k++;
	            }else{
	                if(even[i]>=odd[j])
	                s=s+even[i++];
	                else j++;
	                k++;
	            }
	        }else{
	             if(even[i]<odd[j]){
	                s1=s1+odd[j];
	                j++,k++;
	            }else if(even[i]>odd[j]){
	                i++,k++;
	            }else{
	                if(even[i]<=odd[j])
	                s1=s1+odd[j++];
	                else i++;
	                k++;
	            }
	        }
	    }
	    while(i<even.size()){
	        if(k%2){
	            s+=even[i++];
	            k++;
	        }else i++,k++;
	    }
	    while(j<odd.size()){
	        if(k%2==0){
	            s1+=odd[j++];
	            k++;
	        }else j++,k++;
	    }
	    if(s>s1)cout<<"Alice\n";
	    else if(s<s1)cout<<"Bob\n";
	    else cout<<"Tie\n";
	}
	return 0;
}
