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
        vector<int> dp(top_floor + 1,0);
        // return solve(top_floor,cost,dp);
        dp[0] = 0;
        for(int i  = 1;i <= top_floor;i++){
           dp[i] = min(dp[i-1] + cost[i-1], (i-2 >= 0 ? dp[i-2] + cost[i-2]: 0));
        } 
        return dp[top_floor];  
    }
};