//2D DP
//UNIQUE PATHS

#include<bits/stdc++.h>
using namespace std;
int uniquePaths(int m,int n)
{
 int dp[n]={0};
 dp[0]=1;
 for(int i=0;i<m;i++)
 {
  for(int j=1;j<n;j++)
    dp[j]=dp[j]+dp[j-1];
 }
 return dp[n-1];
}
int main()
{
 int m,n;
 cin>>m>>n;
 cout<<uniquePaths(m,n);
}
//TC: O(mn)
//SC: O(n)

