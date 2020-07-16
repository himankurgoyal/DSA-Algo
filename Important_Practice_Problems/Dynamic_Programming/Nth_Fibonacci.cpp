//1.FIBONACCI USING MEMO

#include<bits/stdc++.h>
using namespace std;
#define modulo 1000000007
#define max 1001

int dp[max];

int print(int n)
{
 if(dp[n]==-1)
  {
   if(n<=1)
   dp[n]=n;
   else
   dp[n]=print(n-1)+print(n-2);
  }
  return dp[n]%modulo;
}

int main()
{
 int  T;
 cin>>T;
 while(T--)
 {
  int N;
  cin>>N;
  for(int i=0;i<max;i++)
    dp[i]=-1;
  cout<<print(N)<<endl;
 }
}

//TC:O(n)
//SC: O(n)
