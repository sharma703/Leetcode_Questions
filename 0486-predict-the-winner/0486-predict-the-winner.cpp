class Solution {
public:

    vector<vector<int>> dp;

    int choose(vector<int>& nums, int i, int j){

        if(i == j){
            return nums[i];
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int left = nums[i] - choose(nums, i + 1, j);

        int right = nums[j] - choose(nums, i, j - 1);

        return dp[i][j] = max(left, right);
    }

    bool predictTheWinner(vector<int>& nums) {

        int n = nums.size();

        dp.resize(n, vector<int>(n, -1));

        int ans = choose(nums, 0, n - 1);

        return ans >= 0;
    }
};