#include<bits/stdc++.h>
using namespace std;
// 0 1 2 
int solve(int no_of_day, vector<vector<int>> &acti, int activity_of_previous_day){
    if(no_of_day == 0){
        return 0;
    }
  
    int maxi = INT_MIN;
    for(int i = 0;i < 3;i++){
        if(i == activity_of_previous_day){
            continue;
        }
        maxi = max(maxi,solve(no_of_day-1,acti,i) + acti[no_of_day-1][i]);
    }
    return maxi;
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
    cout << solve(n,input,3);
    return 0;
}