#include<bits/stdc++.h>
using namespace std;
int solve(int i,vector<int> &costs,vector<int> &dp){
    if(i == 0) return 0;
    int mini = INT_MAX;
    if(dp[i] != -1){
        return dp[i];
    }
    if(i >= 2){
       mini =  solve(i-2,costs,dp) + abs(costs[i] - costs[i-2]);
    }
    mini = min(mini,solve(i-1,costs,dp) + abs(costs[i] - costs[i-1]));
    return dp[i] = mini;
}
int main(){
    int n ;
    cin >> n;
    vector<int> costs(n);
    for(int i = 0;i < n;i++){
        cin >> costs[i];
    }
    vector<int> dp(n,0);
    dp[0] = 0;
    for(int i  = 1;i < n;i++){
        int mini = INT_MAX;
        if(i >= 2){
           mini =  dp[i-2] + abs(costs[i] - costs[i-2]);
        }
        mini = min(mini,dp[i-1] + abs(costs[i] - costs[i-1]));
        dp[i] = mini;
    }
   cout << dp[n-1];
}