class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0, right = 0, mfreq = 0, mlen = 0;
        map<int, int>mp;

        while(right < n){
            mp[s[right]- 'A']++;
            mfreq = max(mfreq, mp[s[right] - 'A']);
            if((right - left + 1) - mfreq > k){
                mp[s[left]-'A']--;
                left++;
            }
            if((right - left + 1) - mfreq <= k){
                mlen = max(mlen, right - left + 1);
            }
            right++;
        }
        return mlen;
    }
};