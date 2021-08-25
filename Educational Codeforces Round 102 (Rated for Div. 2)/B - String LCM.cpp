#include<bits/stdc++.h>
using namespace std;
/* LCM AND GCD PART IS TAKEN FROM https://www.geeksforgeeks.org/program-to-find-lcm-of-two-numbers/*/
 
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	  string s,t1;cin>>s>>t1;
	  int a=0,b=0;
	  int len=lcm(s.size(),t1.size());
	  for(int i=0;i<s.size();i++)
	  {
	      if(s[i]=='a')a++;
	      else b++;
	  }
	  if(a==0||b==0)
	  {
	      int c=0,d=0;
	      for(int i=0;i<t1.size();i++)
	      {
	          if(t1[i]=='a')c++;
	          else d++;
	          
	      }
	      if(a==0&&c==0)
	      {
	          int l=lcm(s.size(),t1.size());
	          for(int i=0;i<l;i++)
	          cout<<'b';
	          cout<<endl;
	      }else if(b==0&&d==0)
	      {
	          int l=lcm(s.size(),t1.size());
	          for(int i=0;i<l;i++)
	          cout<<'a';
	          cout<<endl;
	      }else cout<<-1<<endl;
	      
	  }
	  else
	  {
	      int x=len/s.size();
	      int y=len/t1.size();
	      string s1,t2;
	      while(x--)
	      s1+=s;
	      while(y--)
	      t2+=t1;
	      if(s1==t2)cout<<s1<<"\n";
	      else cout<<"-1\n";
	  }
	}
	return 0;
}
