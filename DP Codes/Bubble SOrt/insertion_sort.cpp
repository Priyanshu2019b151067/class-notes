#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A({41,1,38,26,15,40,36,18,44});
    int n = A.size();
    for(int i = 1;i < n;i++){
       int value = A[i];
        int j = i-1;
        while (j >= 0 && A[j] > value)
        {
            A[j+1]  = A[j];
            j--;
        }
        A[j+1] = value;
    }
    for(int i = 0;i < n;i++){
        cout << A[i] << " ";
    }
    return 0;
}