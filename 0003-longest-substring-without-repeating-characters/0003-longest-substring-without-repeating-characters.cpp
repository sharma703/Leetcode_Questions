class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<bool> count(256);
        int n = s.size();
        int first = 0, second = 0, len = 0;
        while(second < n){
            while(count[s[second]]){
                count[s[first]] = 0;
                first++;
            }
            count[s[second]] = 1;
            len = max(len, second - first + 1);
            second++;
        }
        return len;
    }
};