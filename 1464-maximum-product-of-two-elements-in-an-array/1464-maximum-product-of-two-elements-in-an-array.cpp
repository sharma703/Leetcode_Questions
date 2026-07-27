class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int F_Max = 0, S_Max = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] >= F_Max){
                S_Max = F_Max;
                F_Max = nums[i];
            }
            else if(nums[i] >= S_Max){
                S_Max = nums[i];
            }
        }
        int ans = (F_Max - 1) * (S_Max - 1);
        return ans;
    }
};