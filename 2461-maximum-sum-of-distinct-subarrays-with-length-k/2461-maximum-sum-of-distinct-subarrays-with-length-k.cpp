class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mp;
        int low = 0;
        long long sum = 0;
        long long result = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];
            mp[nums[i]]++;

            if(i - low + 1 > k) {
                mp[nums[low]]--;
                sum -= nums[low];

                if(mp[nums[low]] == 0)
                    mp.erase(nums[low]);

                low++;
            }

            if(i - low + 1 == k && mp.size() == k)
                result = max(result, sum);
        }

        return result;
    }
};