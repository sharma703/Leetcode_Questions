class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int freq[26] = {0};
        int left = 0;
        int ans = 0;

        for(int i = 0; i < n; i++){
            freq[s[i] - 'a']++;

            while(freq[s[i] - 'a'] > 2){
                freq[s[left] - 'a']--;
                left++;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};