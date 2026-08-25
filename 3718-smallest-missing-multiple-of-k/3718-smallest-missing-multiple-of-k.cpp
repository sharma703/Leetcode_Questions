class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 1; i <= n + 1; i++){
            int mul = k*i;
            if(find(nums.begin(), nums.end(), mul) == nums.end()){
                return (k*i);
            }
        }
        return -1;
    }
};