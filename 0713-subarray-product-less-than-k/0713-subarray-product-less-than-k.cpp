class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int pro = 1, cnt = 0;

        if(k <= 1) return 0;

        int left = 0, right = 0;
        while(right < n){
            pro *= nums[right];

            while(pro >= k){
                pro /= nums[left];
                left++;
            }
            cnt += right - left + 1;

            right++;
        }
        return cnt;
    }
};