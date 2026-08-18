class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> count;
        int left = 0;

        while(left + k <= n){
            set<int> st;
            for(int i = left ; i < left + k; i++){
                st.insert(nums[i]);
            }
            for(int x : st){
                count[x]++;
            }
            left++;

        }
        int ans = -1;
        for(auto x : count){
            if(x.second == 1){
                ans = max(ans, x.first);
            }
        }
        return ans;
    }
};