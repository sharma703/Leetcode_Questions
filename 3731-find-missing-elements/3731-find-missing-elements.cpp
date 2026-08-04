class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int expected = nums[0];

        for (int num : nums) {
            while (expected < num) {
                ans.push_back(expected);
                expected++;
            }
            expected++;
        }

        return ans;
    }
};