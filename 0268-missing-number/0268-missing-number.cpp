class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < n; i++){
        //     if(nums[i] != i){
        //         return i;
        //     }
        // }
        int ans = n;
        for(int i=0; i<n; i++){
            ans ^= i ^ nums[i];
        }
        return ans;
        // return n;
    }
};