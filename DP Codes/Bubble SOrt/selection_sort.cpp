#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr({41,1,38,26,15,40,36,18,44});
    int n = arr.size();
    for(int i = 0;i < n-1;i++){
       int smaller_value = arr[i];
       int smaller_index = i;
        for(int j = i;j < n;j++){
            if(arr[j] <  smaller_value){
                smaller_value = arr[j];
                smaller_index = j;
            }
        }
       swap(arr[i],arr[smaller_index]);
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}