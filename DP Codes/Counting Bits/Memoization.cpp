class Solution {
public:
    int no_of_ones(int n,vector<int> &answer){
        // base case
        if(n == 0) return 0;
        // even
        if(answer[n]!=-1){
            return answer[n];
        }
        if(n%2 == 0){
            answer[n] = no_of_ones(n/2,answer);
        }else{
            answer[n] = no_of_ones(n/2,answer) + 1;
        }
        no_of_ones(n-1,answer);
        return answer[n];
    }
    vector<int> countBits(int n) {
        vector<int> answer(n+1,-1);
        answer[0] = 0;
        no_of_ones(n,answer);
        return answer;
    }
};