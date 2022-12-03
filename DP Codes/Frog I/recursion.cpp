#include<bits/stdc++.h>
using namespace std;
int solve(int i,vector<int> &costs){
    if(i == 0) return 0;
    int mini = INT_MAX;
    if(i >= 2){
       mini =  solve(i-2,costs) + abs(costs[i] - costs[i-2]);
    }
    mini = min(mini,solve(i-1,costs) + abs(costs[i] - costs[i-1]));
    return mini;
}
int main(){
    int n ;
    cin >> n;
    vector<int> costs(n);
    for(int i = 0;i < n;i++){
        cin >> costs[i];
    }
    cout << solve(n-1,costs);
}