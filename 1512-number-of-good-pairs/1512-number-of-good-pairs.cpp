class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;

        int cnt = 0;

        for(int x : nums){
            cnt += mpp[x];
            mpp[x]++;
        }
        return cnt;
    }
};