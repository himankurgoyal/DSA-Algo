//1.2 STAIRS PROBLEM
//2 .3 STAIRS PROBLEM

int climbStairs(int n) {
    long int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<n+1;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }

 //TC:O(n)
 //SC:O(n)
