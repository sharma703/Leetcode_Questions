class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mp;
        
        int left = 0, ans = 0;
        for(int right = 0; right < n; right++){
            mp[nums[right]]++;
            
            while(mp[nums[right]] > k){
                mp[nums[left]]--;
                left++;
            }
            int len = right - left + 1;
            ans = max(ans, len);
        }
        return ans;
    }
};