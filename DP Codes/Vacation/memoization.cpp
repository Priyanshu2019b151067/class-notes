#include<bits/stdc++.h>
using namespace std;
int solve(int no_of_day, vector<vector<int>> &acti, int activity_of_previous_day,vector<vector<int>> &dp){
    if(no_of_day == 0){
        return 0;
    }
    if(dp[no_of_day][activity_of_previous_day]!= -1){
        return dp[no_of_day][activity_of_previous_day];
    } 
    int maxi = INT_MIN;
    for(int i = 0;i < 3;i++){
        if(i == activity_of_previous_day){
            continue;
        }
        maxi = max(maxi,solve(no_of_day-1,acti,i,dp) + acti[no_of_day-1][i]);
    }
    return dp[no_of_day][activity_of_previous_day] = maxi;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> input(n,vector<int>(3,0));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin >> input[i][j];
        }
    }
    vector<vector<int>> dp(n+1,vector<int>(4,-1));
    cout << solve(n,input,3,dp);
    return 0;
}