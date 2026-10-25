class Solution {
public:
    void sub(int ind, vector<int> &ans, vector<int> &nums, int n, vector<vector<int>> &res){
        res.push_back(ans);
        for(int i = ind; i < n; i++){
            if(i > ind && nums[i] == nums[i-1]) continue;

            ans.push_back(nums[i]);
            sub(i+1, ans, nums, n, res);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        vector<vector<int>> res;

        sub(0, ans, nums, n, res);
        return res;
    }
};