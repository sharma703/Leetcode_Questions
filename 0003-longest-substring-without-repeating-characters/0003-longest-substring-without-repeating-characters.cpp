class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0, right = 0;
        int mLen = 0;
        map<char, int> mpp;

        while(right < n){
            if(mpp.find(s[right]) != mpp.end() && mpp[s[right]] >= left){
                left = mpp[s[right]] + 1;
            }
            int len = right - left + 1;
            mLen = max(mLen, len);
            mpp[s[right]] = right;
            right++;
        }
        
        return mLen;
    }
};