class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0; 
        int mcnt = 0;
        int cnt0 = 0;

        for(int right = 0; right < n; right++){
            if(nums[right] == 0){
                cnt0++;
            }

            while(cnt0 > 1){
                if(nums[left] == 0){
                    cnt0--;
                }
                left++;
            }

            mcnt = max(mcnt, right - left);
            
        }
        return mcnt;
    }
};