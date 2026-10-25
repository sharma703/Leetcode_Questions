class Solution {
public:

    void sub(int ind, vector<int> &ans, vector<int> &nums, int n, vector<vector<int>> &res){
        if(ind == n){
            res.push_back(ans);
            return;
        }

        ans.push_back(nums[ind]);
        sub(ind+1, ans, nums, n, res);
        ans.pop_back();
        sub(ind+1, ans, nums, n, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<vector<int>> res;
        sub(0, ans, nums, n, res);

        return res;
    }
};