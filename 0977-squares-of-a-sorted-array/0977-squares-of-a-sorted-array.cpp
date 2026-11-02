class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] * nums[i];
            // ans.push_back(val);
        }
        sort(nums.begin(), nums.end());
        // sort(ans.begin(), ans.end());;

        return nums;
    }
};