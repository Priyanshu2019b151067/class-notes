class Solution {
public:
    int solve(int n, vector<int> &cost){
        if(n <= 0) return 0;
        return min(solve(n-1,cost) + cost[n-1],solve(n-2,cost) + (n-2 >= 0 ?cost[n-2] : 0));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int top_floor = cost.size();
        return solve(top_floor,cost);
    }
};