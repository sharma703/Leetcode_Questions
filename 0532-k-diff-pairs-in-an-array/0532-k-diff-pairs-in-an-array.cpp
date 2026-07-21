class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();

        if(k < 0) return 0;

        map<int, int> mp;
        for(int x : nums){
            mp[x]++;
        }

        int cnt = 0;
        for(auto it : mp){
            int num = it.first;
            if(k == 0){
                if(it.second > 1){
                    cnt++;
                }
            }
            else{
                if(mp.count(num + k)){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};