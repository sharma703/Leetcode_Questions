class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        while(mini != 0){
            int rem = maxi % mini;
            maxi = mini;
            mini = rem;
        }
        return maxi;
    }
};