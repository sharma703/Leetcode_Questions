class Solution {
public:
    bool find(vector<int> & nums, int ans){
        int n = nums.size();
        set<int> st(nums.begin(), nums.end());
        if(st.find(ans) != st.end()) return false;
        return true;
    }
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1] + 1){
                sum += nums[i];
            }
            else{
                break;
            }
        }
        
        while(!find(nums,sum)){
            sum ++;
        }
    return sum;
    }
};