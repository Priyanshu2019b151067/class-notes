#include<bits/stdc++.h>
using namespace std;
int solve(int i,int k,vector<int> &cost,vector<int> &dp){
    if(i == 0) return 0;
    if(dp[i] != -1){
        return dp[i];
    }
    int mini = INT_MAX;
    for(int p = 1;p <= k;p++){
        if(i - p >= 0){
            mini = min(mini,solve(i- p,k,cost,dp) + abs(cost[i] - cost[i-p]));
        }
    }
    return dp[i] = mini;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> cost(n);
    for(int i = 0;i < n;i++){
        cin >> cost[i];
    }
    vector<int> dp(n+1,-1);
    cout << solve(n-1,k,cost,dp);
}