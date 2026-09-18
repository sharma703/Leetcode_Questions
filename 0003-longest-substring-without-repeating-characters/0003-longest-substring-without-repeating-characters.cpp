class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int mLen = 0;

        int freq[256] = {0};

        for(int i = 0; i < n; i++){
            freq[s[i]]++;

            while(freq[s[i]] > 1){
                freq[s[left]]--;
                left++;
            }
            int len = i - left + 1;

            if(len > mLen) mLen = len;
        }
        
        
        return mLen;
    }
};