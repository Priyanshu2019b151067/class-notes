#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> input(n,vector<int>(3,0));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin >> input[i][j];
        }
    }
    vector<vector<int>> dp(n+1,vector<int>(4));
    for(int i  = 0;i <= 3;i++){
        dp[0][i] = 0;
    }

    for(int nd = 1;nd <= n ;nd++){
        for(int ap = 0;ap <= 3;ap++){
           int maxi = INT_MIN;
            for(int i = 0;i < 3;i++){
                    if(i == ap){
                        continue;
                    }
                maxi = max(maxi,dp[nd-1][i] + input[nd-1][i]);
            }
            dp[nd][ap] = maxi;
        }
    }
     
    cout <<  dp[n][3];
}