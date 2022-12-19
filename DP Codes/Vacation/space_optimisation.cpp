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
    vector<int> prev_day(4,0);
    vector<int> current_day(4,0);
    for(int nd = 1;nd <= n ;nd++){
        for(int ap = 0;ap <= 3;ap++){
            int maxi = INT_MIN;
            for(int i = 0;i < 3;i++){
                if(i == ap){
                    continue;
                }
                maxi = max(maxi,prev_day[i] + input[nd-1][i]);
            }
            current_day[ap] = maxi;
        }
        prev_day = current_day;
    }
     
    cout <<  current_day[3];
}