class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int lsum = 0;
        int tsum = 0;

        for(int i = 0; i < n; i++){
            tsum += nums[i];
        }
        for(int i = 0; i < n; i++){
            int rsum = tsum - lsum - nums[i];
            if(rsum == lsum) return i;
            else{
                lsum += nums[i];
            }
        }
        return -1;
    }
};