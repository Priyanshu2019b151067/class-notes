class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer(n+1);
        // base case
        answer[0] = 0;
        // no_of_ones(n,answer);
        for(int i = 1;i <= n;i++){
            if(i%2 == 0){
                answer[i] = answer[i/2];
            }else{
                answer[i] = answer[i/2] + 1;
            }
        }
        return answer;
    }
};