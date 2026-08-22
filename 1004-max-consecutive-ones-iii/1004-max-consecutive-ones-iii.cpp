class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = 0, mlen = 0;
        int zeros = 0;
        while(right < n){
            if(nums[right] == 0){
                zeros++;
            }
            if(zeros <= k){
                int len = right - left + 1;
                mlen = max(mlen, len);
            }
            if(zeros > k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }
            right++;
        }
        return mlen;
    }
};