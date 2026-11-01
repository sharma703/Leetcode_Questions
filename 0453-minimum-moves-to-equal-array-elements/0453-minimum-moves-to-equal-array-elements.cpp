class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min_Num = nums[0];
        int moves = 0;

        for(int i = 0; i < n; i++){
            moves += nums[i];
            min_Num = min(min_Num, nums[i]);
        }
        moves = moves - (n * min_Num);
        return moves;
    }
};