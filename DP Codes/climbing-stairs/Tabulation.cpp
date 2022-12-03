class Solution {
public:
    int solve(int n,vector<int> &dp){
        // base class
        if(n < 0) return 0;
        if(n == 0) return 1;
        if(dp[n] !=-1){
            return dp[n];
        }
        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
    }
    int climbStairs(int n) {
       // top_floor 
       int top_floor = n;
       vector<int> dp(n+1,0);
       dp[0]  = 1;
    //    return solve(top_floor,dp);
        for(int i = 1;i <= n;i++){
            dp[i] = dp[i-1] + (i-2 >= 0 ?dp[i-2]:0);
        } 
        return dp[n];
    }
};