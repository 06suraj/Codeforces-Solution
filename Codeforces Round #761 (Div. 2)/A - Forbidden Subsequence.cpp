#include<bits/stdc++.h>
using namespace std;
bool isSubSequence(string str1,string str2 , int m, int n)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
	    string s,t1;
	   cin>>s>>t1;
	   sort(s.begin(),s.end());
	   if(isSubSequence(t1,s,3,s.size())){
	       int first=0,second=0;
	       for(int i=s.size();i>=0;i--){
	           if(s[i]==t1[2]){
	               first=i;
	               break;
	           }
	       }
	       for(int i=s.size();i>=0;i--){
	           if(s[i]==t1[1]){
	               second=i;
	               break;
	           }
	       }
	       while(first>=0 and second>=0){
	           if(s[first]!=t1[2] or s[second]!=t1[1])break;
	           swap(s[first],s[second]);
	           first--,second--;
	       }
	   }
	   cout<<s<<endl;
	}
	return 0;
}
