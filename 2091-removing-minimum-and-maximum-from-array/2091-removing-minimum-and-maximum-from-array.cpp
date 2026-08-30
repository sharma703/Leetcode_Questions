class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int maxInd = 0;
        int maxval = INT_MIN;
        int minval = INT_MAX;
        int minInd = 0;

        for(int i = 0; i < n; i++){
            if(maxval < nums[i]){
                maxInd = i;
                maxval = nums[i];
            }
            if(minval > nums[i]){
                minInd = i;
                minval = nums[i];
            }
        }
        int left = min(minInd, maxInd);
        int right = max(minInd, maxInd);

        return min({
            right + 1,
            n - left,
            left + 1 + n - right
        });
    }
};