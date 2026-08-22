class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int left = 0, right = 0, mlen = 0;
        map<int, int> mpp;
        while(right < n){
            mpp[fruits[right]]++;

            if(mpp.size() <= 2){
                int len = right - left + 1;
                mlen = max(len, mlen);
            }
            if(mpp.size() > 2){
                mpp[fruits[left]]--;
                if(mpp[fruits[left]] == 0) mpp.erase(fruits[left]);
                left++;
            }
            right++;
        }
        return mlen;
    }
};