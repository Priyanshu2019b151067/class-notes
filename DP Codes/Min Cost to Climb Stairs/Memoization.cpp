class Solution {
public:
    int solve(int n, vector<int> &cost,vector<int> &dp){
        if(n <= 0) return 0;
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = min(solve(n-1,cost,dp) + cost[n-1],solve(n-2,cost,dp) + (n-2 >= 0 ?cost[n-2] : 0));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int top_floor = cost.size();
        vector<int> dp(top_floor + 1,-1);
        return solve(top_floor,cost,dp);
    }
};