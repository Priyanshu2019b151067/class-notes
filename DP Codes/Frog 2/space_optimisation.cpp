#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> cost(n);
    for(int i = 0;i < n;i++){
        cin >> cost[i];
    }
    vector<int> dp(n,0);
    // cout << solve(n-1,k,cost,dp);
    dp[0] = 0;
    for(int i = 1;i < n;i++){
        int mini = INT_MAX;
        for(int p = 1;p <= k;p++){
            if(i - p >= 0){
                mini = min(mini,dp[i-p] + abs(cost[i] - cost[i-p]));
            } 
        }
        dp[i] = mini;
    }
    cout << dp[n-1] ;
}