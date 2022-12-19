#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr({41,1,38,26,15,40,36,18,44});
    int n = arr.size();
    for(int i = 0;i < n-1;i++){
        bool swapped = false;
        for(int j = 0;j < n- 1-i;j++){
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!swapped){
            break;
        }
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}