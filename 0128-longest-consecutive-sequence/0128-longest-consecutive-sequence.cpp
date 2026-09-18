class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;

        for(int x : nums){
            st.insert(x);
        }
        int ans = 0;

        for(int x : st){
            if(st.find(x - 1) == st.end()){
                int curr = x;
                int cnt = 1;

                while(st.find(curr + 1) != st.end()){
                    curr++;
                    cnt++;
                }

                if(cnt > ans) ans = cnt;
            }
        }
        return ans;
    }
};