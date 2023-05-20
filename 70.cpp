class Solution {
public:

    int climbStairs(int n) {

        vector<int>dp(n+1,-1);
        fib(n,dp);
        return dp[n];


    }

    int fib(int n,vector<int>&dp){
        if(n==0){
            dp[n]=1;
            return 1;
        }
        if(n==1){
            dp[n]=1;
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=fib(n-1,dp)+fib(n-2,dp);
        return dp[n];
    }



};
